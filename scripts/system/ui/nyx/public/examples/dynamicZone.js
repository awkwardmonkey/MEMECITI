(function () {
    var NyxAlpha1 = Script.require('../nyx-helpers.js?12dsadsddsadssaddddsadassadasdsasaddseras3');

    var _entityID;

    function onEntityMenuTriggered(triggeredEntityID, command, menuItem) {
        if (menuItem === 'Keylight On' && triggeredEntityID === _entityID) {
            Entities.editEntity(_entityID, { 
                keyLightMode: 'on'
            });
        }
        
        if (menuItem === 'Keylight Off' && triggeredEntityID === _entityID) {
            Entities.editEntity(_entityID, { 
                keyLightMode: 'off'
            });
        }
    }
    
    function onDynamicEntityMenuTriggered(triggeredEntityID, command, data) {
        if (data.name === 'Keylight Color' && triggeredEntityID === _entityID) {
            Entities.editEntity(_entityID, { 
                keyLightColor: { 
                    red: data.colors.rgba.r,
                    green: data.colors.rgba.g,
                    blue: data.colors.rgba.b
                }
            });
        }
        
        if (data.name === 'Brightness' && triggeredEntityID === _entityID) {
            Entities.editEntity(_entityID, { 
                keyLightIntensity: data.value
            });
        }
    }

    this.preload = function (entityID) {
        _entityID = entityID;

        var initialProps = Entities.getEntityProperties(_entityID, ['color', 'alpha']);
        
        NyxAlpha1.registerWithEntityMenu(entityID, {
            buttons: [
                {
                    name: 'Keylight On'
                },
                {
                    name: 'Keylight Off'
                }
            ],
            colorPickers: [
                {
                    name: 'Keylight Color',
                }
            ],
            sliders: [
                {
                    name: 'Brightness',
                    step: 0.1,
                    color: 'yellow',
                    minValue: 0,
                    maxValue: 1
                }
            ]
        });
        NyxAlpha1.entityMenuPressed.connect(onEntityMenuTriggered);
        NyxAlpha1.dynamicEntityMenuTriggered.connect(onDynamicEntityMenuTriggered);
    };

    this.unload = function () {
        NyxAlpha1.entityMenuPressed.disconnect(onEntityMenuTriggered);
        NyxAlpha1.dynamicEntityMenuTriggered.disconnect(onDynamicEntityMenuTriggered);
    };

});