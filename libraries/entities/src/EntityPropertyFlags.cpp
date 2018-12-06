
#include "EntityPropertyFlags.h"


QDebug& operator<<(QDebug& dbg, const EntityPropertyFlags& f) {
    QString result = "[ ";

    result = f.getHasProperty(PROP_PAGED_PROPERTY) ? result + "pagedProperty " : result;
    result = f.getHasProperty(PROP_CUSTOM_PROPERTIES_INCLUDED) ? result + "customPropertiesIncluded " : result;
    result = f.getHasProperty(PROP_VISIBLE) ? result + "visible " : result;
    result = f.getHasProperty(PROP_CAN_CAST_SHADOW) ? result + "canCastShadow " : result;
    result = f.getHasProperty(PROP_POSITION) ? result + "position " : result;
    result = f.getHasProperty(PROP_DIMENSIONS) ? result + "dimensions " : result;
    result = f.getHasProperty(PROP_ROTATION) ? result + "rotation " : result;
    result = f.getHasProperty(PROP_DENSITY) ? result + "density " : result;
    result = f.getHasProperty(PROP_VELOCITY) ? result + "velocity " : result;
    result = f.getHasProperty(PROP_GRAVITY) ? result + "gravity " : result;
    result = f.getHasProperty(PROP_DAMPING) ? result + "damping " : result;
    result = f.getHasProperty(PROP_LIFETIME) ? result + "lifetime " : result;
    result = f.getHasProperty(PROP_SCRIPT) ? result + "script " : result;
    result = f.getHasProperty(PROP_COLOR) ? result + "color " : result;
    result = f.getHasProperty(PROP_MODEL_URL) ? result + "modelUrl " : result;
    result = f.getHasProperty(PROP_ANIMATION_URL) ? result + "animationUrl " : result;
    result = f.getHasProperty(PROP_ANIMATION_FPS) ? result + "animationFps " : result;
    result = f.getHasProperty(PROP_ANIMATION_FRAME_INDEX) ? result + "animationFrameIndex " : result;
    result = f.getHasProperty(PROP_ANIMATION_PLAYING) ? result + "animationPlaying " : result;
    result = f.getHasProperty(PROP_ANIMATION_ALLOW_TRANSLATION) ? result + "animationAllowTranslation " : result;
    result = f.getHasProperty(PROP_RELAY_PARENT_JOINTS) ? result + "relayParentJoints " : result;
    result = f.getHasProperty(PROP_REGISTRATION_POINT) ? result + "registrationPoint " : result;
    result = f.getHasProperty(PROP_ANGULAR_VELOCITY) ? result + "angularVelocity " : result;
    result = f.getHasProperty(PROP_ANGULAR_DAMPING) ? result + "angularDamping " : result;
    result = f.getHasProperty(PROP_COLLISIONLESS) ? result + "collisionless " : result;
    result = f.getHasProperty(PROP_DYNAMIC) ? result + "dynamic " : result;
    result = f.getHasProperty(PROP_IS_SPOTLIGHT) ? result + "isSpotlight " : result;
    result = f.getHasProperty(PROP_DIFFUSE_COLOR) ? result + "diffuseColor " : result;
    result = f.getHasProperty(PROP_AMBIENT_COLOR_UNUSED) ? result + "ambientColorUnused " : result;
    result = f.getHasProperty(PROP_SPECULAR_COLOR_UNUSED) ? result + "specularColorUnused " : result;
    result = f.getHasProperty(PROP_INTENSITY) ? result + "intensity " : result;
    result = f.getHasProperty(PROP_LINEAR_ATTENUATION_UNUSED) ? result + "linearAttenuationUnused " : result;
    result = f.getHasProperty(PROP_QUADRATIC_ATTENUATION_UNUSED) ? result + "quadraticAttenuationUnused " : result;
    result = f.getHasProperty(PROP_EXPONENT) ? result + "exponent " : result;
    result = f.getHasProperty(PROP_CUTOFF) ? result + "cutoff " : result;
    result = f.getHasProperty(PROP_LOCKED) ? result + "locked " : result;
    result = f.getHasProperty(PROP_TEXTURES) ? result + "textures " : result;
    result = f.getHasProperty(PROP_ANIMATION_SETTINGS_UNUSED) ? result + "animationSettingsUnused " : result;
    result = f.getHasProperty(PROP_USER_DATA) ? result + "userData " : result;
    result = f.getHasProperty(PROP_SHAPE_TYPE) ? result + "shapeType " : result;
    result = f.getHasProperty(PROP_MAX_PARTICLES) ? result + "maxParticles " : result;
    result = f.getHasProperty(PROP_LIFESPAN) ? result + "lifespan " : result;
    result = f.getHasProperty(PROP_EMIT_RATE) ? result + "emitRate " : result;
    result = f.getHasProperty(PROP_EMIT_SPEED) ? result + "emitSpeed " : result;
    result = f.getHasProperty(PROP_EMIT_STRENGTH) ? result + "emitStrength " : result;
    result = f.getHasProperty(PROP_EMIT_ACCELERATION) ? result + "emitAcceleration " : result;
    result = f.getHasProperty(PROP_PARTICLE_RADIUS) ? result + "particleRadius " : result;
    result = f.getHasProperty(PROP_COMPOUND_SHAPE_URL) ? result + "compoundShapeUrl " : result;
    result = f.getHasProperty(PROP_MARKETPLACE_ID) ? result + "marketplaceID " : result;
    result = f.getHasProperty(PROP_ACCELERATION) ? result + "acceleration " : result;
    result = f.getHasProperty(PROP_SIMULATION_OWNER) ? result + "simulationOwner " : result;
    result = f.getHasProperty(PROP_NAME) ? result + "name " : result;
    result = f.getHasProperty(PROP_COLLISION_SOUND_URL) ? result + "collisionSoundUrl " : result;
    result = f.getHasProperty(PROP_RESTITUTION) ? result + "restitution " : result;
    result = f.getHasProperty(PROP_FRICTION) ? result + "friction " : result;
    result = f.getHasProperty(PROP_VOXEL_VOLUME_SIZE) ? result + "voxelVolumeSize " : result;
    result = f.getHasProperty(PROP_VOXEL_DATA) ? result + "voxelData " : result;
    result = f.getHasProperty(PROP_VOXEL_SURFACE_STYLE) ? result + "voxelSurfaceStyle " : result;
    result = f.getHasProperty(PROP_LINE_WIDTH) ? result + "lineWidth " : result;
    result = f.getHasProperty(PROP_LINE_POINTS) ? result + "linePoints " : result;
    result = f.getHasProperty(PROP_HREF) ? result + "href " : result;
    result = f.getHasProperty(PROP_DESCRIPTION) ? result + "description " : result;
    result = f.getHasProperty(PROP_BILLBOARD_MODE) ? result + "billboardMode " : result;
    result = f.getHasProperty(PROP_SCRIPT_TIMESTAMP) ? result + "scriptTimestamp " : result;
    result = f.getHasProperty(PROP_ACTION_DATA) ? result + "actionData " : result;
    result = f.getHasProperty(PROP_X_TEXTURE_URL) ? result + "xTextureUrl " : result;
    result = f.getHasProperty(PROP_Y_TEXTURE_URL) ? result + "yTextureUrl " : result;
    result = f.getHasProperty(PROP_Z_TEXTURE_URL) ? result + "zTextureUrl " : result;
    result = f.getHasProperty(PROP_NORMALS) ? result + "normals " : result;
    result = f.getHasProperty(PROP_STROKE_COLORS) ? result + "strokeColors " : result;
    result = f.getHasProperty(PROP_STROKE_WIDTHS) ? result + "strokeWidths " : result;
    result = f.getHasProperty(PROP_IS_UV_MODE_STRETCH) ? result + "isUvModeStretch " : result;
    result = f.getHasProperty(PROP_SPEED_SPREAD) ? result + "speedSpread " : result;
    result = f.getHasProperty(PROP_ACCELERATION_SPREAD) ? result + "accelerationSpread " : result;
    result = f.getHasProperty(PROP_X_N_NEIGHBOR_ID) ? result + "xNNeighborID " : result;
    result = f.getHasProperty(PROP_Y_N_NEIGHBOR_ID) ? result + "yNNeighborID " : result;
    result = f.getHasProperty(PROP_Z_N_NEIGHBOR_ID) ? result + "zNNeighborID " : result;
    result = f.getHasProperty(PROP_X_P_NEIGHBOR_ID) ? result + "xPNeighborID " : result;
    result = f.getHasProperty(PROP_Y_P_NEIGHBOR_ID) ? result + "yPNeighborID " : result;
    result = f.getHasProperty(PROP_Z_P_NEIGHBOR_ID) ? result + "zPNeighborID " : result;
    result = f.getHasProperty(PROP_RADIUS_SPREAD) ? result + "radiusSpread " : result;
    result = f.getHasProperty(PROP_RADIUS_START) ? result + "radiusStart " : result;
    result = f.getHasProperty(PROP_RADIUS_FINISH) ? result + "radiusFinish " : result;
    result = f.getHasProperty(PROP_ALPHA) ? result + "alpha " : result;
    result = f.getHasProperty(PROP_COLOR_SPREAD) ? result + "colorSpread " : result;
    result = f.getHasProperty(PROP_COLOR_START) ? result + "colorStart " : result;
    result = f.getHasProperty(PROP_COLOR_FINISH) ? result + "colorFinish " : result;
    result = f.getHasProperty(PROP_ALPHA_SPREAD) ? result + "alphaSpread " : result;
    result = f.getHasProperty(PROP_ALPHA_START) ? result + "alphaStart " : result;
    result = f.getHasProperty(PROP_ALPHA_FINISH) ? result + "alphaFinish " : result;
    result = f.getHasProperty(PROP_EMIT_ORIENTATION) ? result + "emitOrientation " : result;
    result = f.getHasProperty(PROP_EMIT_DIMENSIONS) ? result + "emitDimensions " : result;
    result = f.getHasProperty(PROP_EMIT_RADIUS_START) ? result + "emitRadiusStart " : result;
    result = f.getHasProperty(PROP_POLAR_START) ? result + "polarStart " : result;
    result = f.getHasProperty(PROP_POLAR_FINISH) ? result + "polarFinish " : result;
    result = f.getHasProperty(PROP_AZIMUTH_START) ? result + "azimuthStart " : result;
    result = f.getHasProperty(PROP_AZIMUTH_FINISH) ? result + "azimuthFinish " : result;
    result = f.getHasProperty(PROP_ANIMATION_LOOP) ? result + "animationLoop " : result;
    result = f.getHasProperty(PROP_ANIMATION_FIRST_FRAME) ? result + "animationFirstFrame " : result;
    result = f.getHasProperty(PROP_ANIMATION_LAST_FRAME) ? result + "animationLastFrame " : result;
    result = f.getHasProperty(PROP_ANIMATION_HOLD) ? result + "animationHold " : result;
    result = f.getHasProperty(PROP_ANIMATION_START_AUTOMATICALLY) ? result + "animationStartAutomatically " : result;
    result = f.getHasProperty(PROP_EMITTER_SHOULD_TRAIL) ? result + "emitterShouldTrail " : result;
    result = f.getHasProperty(PROP_PARENT_ID) ? result + "parentID " : result;
    result = f.getHasProperty(PROP_PARENT_JOINT_INDEX) ? result + "parentJointIndex " : result;
    result = f.getHasProperty(PROP_LOCAL_POSITION) ? result + "localPosition " : result;
    result = f.getHasProperty(PROP_LOCAL_ROTATION) ? result + "localRotation " : result;
    result = f.getHasProperty(PROP_QUERY_AA_CUBE) ? result + "queryAaCube " : result;
    result = f.getHasProperty(PROP_JOINT_ROTATIONS_SET) ? result + "jointRotationsSet " : result;
    result = f.getHasProperty(PROP_JOINT_ROTATIONS) ? result + "jointRotations " : result;
    result = f.getHasProperty(PROP_JOINT_TRANSLATIONS_SET) ? result + "jointTranslationsSet " : result;
    result = f.getHasProperty(PROP_JOINT_TRANSLATIONS) ? result + "jointTranslations " : result;
    result = f.getHasProperty(PROP_COLLISION_MASK) ? result + "collisionMask " : result;
    result = f.getHasProperty(PROP_FALLOFF_RADIUS) ? result + "falloffRadius " : result;
    result = f.getHasProperty(PROP_FLYING_ALLOWED) ? result + "flyingAllowed " : result;
    result = f.getHasProperty(PROP_GHOSTING_ALLOWED) ? result + "ghostingAllowed " : result;
    result = f.getHasProperty(PROP_CLIENT_ONLY) ? result + "clientOnly " : result;
    result = f.getHasProperty(PROP_OWNING_AVATAR_ID) ? result + "owningAvatarID " : result;
    result = f.getHasProperty(PROP_SHAPE) ? result + "shape " : result;
    result = f.getHasProperty(PROP_DPI) ? result + "dpi " : result;
    result = f.getHasProperty(PROP_LOCAL_VELOCITY) ? result + "localVelocity " : result;
    result = f.getHasProperty(PROP_LOCAL_ANGULAR_VELOCITY) ? result + "localAngularVelocity " : result;
    result = f.getHasProperty(PROP_LAST_EDITED_BY) ? result + "lastEditedBy " : result;
    result = f.getHasProperty(PROP_SERVER_SCRIPTS) ? result + "serverScripts " : result;
    result = f.getHasProperty(PROP_FILTER_URL) ? result + "filterUrl " : result;
    result = f.getHasProperty(PROP_ITEM_NAME) ? result + "itemName " : result;
    result = f.getHasProperty(PROP_ITEM_DESCRIPTION) ? result + "itemDescription " : result;
    result = f.getHasProperty(PROP_ITEM_CATEGORIES) ? result + "itemCategories " : result;
    result = f.getHasProperty(PROP_ITEM_ARTIST) ? result + "itemArtist " : result;
    result = f.getHasProperty(PROP_ITEM_LICENSE) ? result + "itemLicense " : result;
    result = f.getHasProperty(PROP_LIMITED_RUN) ? result + "limitedRun " : result;
    result = f.getHasProperty(PROP_EDITION_NUMBER) ? result + "editionNumber " : result;
    result = f.getHasProperty(PROP_ENTITY_INSTANCE_NUMBER) ? result + "entityInstanceNumber " : result;
    result = f.getHasProperty(PROP_CERTIFICATE_ID) ? result + "certificateID " : result;
    result = f.getHasProperty(PROP_STATIC_CERTIFICATE_VERSION) ? result + "staticCertificateVersion " : result;
    result = f.getHasProperty(PROP_CLONEABLE) ? result + "cloneable " : result;
    result = f.getHasProperty(PROP_CLONE_LIFETIME) ? result + "cloneLifetime " : result;
    result = f.getHasProperty(PROP_CLONE_LIMIT) ? result + "cloneLimit " : result;
    result = f.getHasProperty(PROP_CLONE_DYNAMIC) ? result + "cloneDynamic " : result;
    result = f.getHasProperty(PROP_CLONE_AVATAR_ENTITY) ? result + "cloneAvatarEntity " : result;
    result = f.getHasProperty(PROP_CLONE_ORIGIN_ID) ? result + "cloneOriginID " : result;
    result = f.getHasProperty(PROP_HAZE_MODE) ? result + "hazeMode " : result;
    result = f.getHasProperty(PROP_KEYLIGHT_COLOR) ? result + "keylightColor " : result;
    result = f.getHasProperty(PROP_KEYLIGHT_INTENSITY) ? result + "keylightIntensity " : result;
    result = f.getHasProperty(PROP_KEYLIGHT_DIRECTION) ? result + "keylightDirection " : result;
    result = f.getHasProperty(PROP_KEYLIGHT_CAST_SHADOW) ? result + "keylightCastShadow " : result;
    result = f.getHasProperty(PROP_HAZE_RANGE) ? result + "hazeRange " : result;
    result = f.getHasProperty(PROP_HAZE_COLOR) ? result + "hazeColor " : result;
    result = f.getHasProperty(PROP_HAZE_GLARE_COLOR) ? result + "hazeGlareColor " : result;
    result = f.getHasProperty(PROP_HAZE_ENABLE_GLARE) ? result + "hazeEnableGlare " : result;
    result = f.getHasProperty(PROP_HAZE_GLARE_ANGLE) ? result + "hazeGlareAngle " : result;
    result = f.getHasProperty(PROP_HAZE_ALTITUDE_EFFECT) ? result + "hazeAltitudeEffect " : result;
    result = f.getHasProperty(PROP_HAZE_CEILING) ? result + "hazeCeiling " : result;
    result = f.getHasProperty(PROP_HAZE_BASE_REF) ? result + "hazeBaseRef " : result;
    result = f.getHasProperty(PROP_HAZE_BACKGROUND_BLEND) ? result + "hazeBackgroundBlend " : result;
    result = f.getHasProperty(PROP_HAZE_ATTENUATE_KEYLIGHT) ? result + "hazeAttenuateKeylight " : result;
    result = f.getHasProperty(PROP_HAZE_KEYLIGHT_RANGE) ? result + "hazeKeylightRange " : result;
    result = f.getHasProperty(PROP_HAZE_KEYLIGHT_ALTITUDE) ? result + "hazeKeylightAltitude " : result;
    result = f.getHasProperty(PROP_KEY_LIGHT_MODE) ? result + "keyLightMode " : result;
    result = f.getHasProperty(PROP_AMBIENT_LIGHT_MODE) ? result + "ambientLightMode " : result;
    result = f.getHasProperty(PROP_SKYBOX_MODE) ? result + "skyboxMode " : result;
    result = f.getHasProperty(PROP_LOCAL_DIMENSIONS) ? result + "localDimensions " : result;
    result = f.getHasProperty(PROP_MATERIAL_URL) ? result + "materialUrl " : result;
    result = f.getHasProperty(PROP_MATERIAL_MAPPING_MODE) ? result + "materialMappingMode " : result;
    result = f.getHasProperty(PROP_MATERIAL_PRIORITY) ? result + "materialPriority " : result;
    result = f.getHasProperty(PROP_PARENT_MATERIAL_NAME) ? result + "parentMaterialName " : result;
    result = f.getHasProperty(PROP_MATERIAL_MAPPING_POS) ? result + "materialMappingPos " : result;
    result = f.getHasProperty(PROP_MATERIAL_MAPPING_SCALE) ? result + "materialMappingScale " : result;
    result = f.getHasProperty(PROP_MATERIAL_MAPPING_ROT) ? result + "materialMappingRot " : result;
    result = f.getHasProperty(PROP_MATERIAL_DATA) ? result + "materialData " : result;
    result = f.getHasProperty(PROP_MATERIAL_REPEAT) ? result + "materialRepeat " : result;
    result = f.getHasProperty(PROP_VISIBLE_IN_SECONDARY_CAMERA) ? result + "visibleInSecondaryCamera " : result;
    result = f.getHasProperty(PROP_PARTICLE_SPIN) ? result + "particleSpin " : result;
    result = f.getHasProperty(PROP_SPIN_START) ? result + "spinStart " : result;
    result = f.getHasProperty(PROP_SPIN_FINISH) ? result + "spinFinish " : result;
    result = f.getHasProperty(PROP_SPIN_SPREAD) ? result + "spinSpread " : result;
    result = f.getHasProperty(PROP_PARTICLE_ROTATE_WITH_ENTITY) ? result + "particleRotateWithEntity " : result;
    result = f.getHasProperty(PROP_BLOOM_INTENSITY) ? result + "bloomIntensity " : result;
    result = f.getHasProperty(PROP_BLOOM_THRESHOLD) ? result + "bloomThreshold " : result;
    result = f.getHasProperty(PROP_BLOOM_SIZE) ? result + "bloomSize " : result;
    result = f.getHasProperty(PROP_GRAB_GRABBABLE) ? result + "grab.Grabbable " : result;
    result = f.getHasProperty(PROP_GRAB_KINEMATIC) ? result + "grab.Kinematic " : result;
    result = f.getHasProperty(PROP_GRAB_FOLLOWS_CONTROLLER) ? result + "grab.FollowsController " : result;
    result = f.getHasProperty(PROP_GRAB_TRIGGERABLE) ? result + "grab.Triggerable " : result;
    result = f.getHasProperty(PROP_GRAB_EQUIPPABLE) ? result + "grab.Equippable " : result;
    result =
        f.getHasProperty(PROP_GRAB_LEFT_EQUIPPABLE_POSITION_OFFSET) ? result + "grab.LeftEquippablePositionOffset " : result;
    result =
        f.getHasProperty(PROP_GRAB_LEFT_EQUIPPABLE_ROTATION_OFFSET) ? result + "grab.LeftEquippableRotationOffset " : result;
    result =
        f.getHasProperty(PROP_GRAB_RIGHT_EQUIPPABLE_POSITION_OFFSET) ? result + "grab.RightEquippablePositionOffset " : result;
    result =
        f.getHasProperty(PROP_GRAB_RIGHT_EQUIPPABLE_ROTATION_OFFSET) ? result + "grab.RightEquippableRotationOffset " : result;
    result = f.getHasProperty(PROP_GRAB_EQUIPPABLE_INDICATOR_URL) ? result + "grab.EquippableIndicatorURL " : result;
    result = f.getHasProperty(PROP_GRAB_EQUIPPABLE_INDICATOR_SCALE) ? result + "grab.EquippableIndicatorScale " : result;
    result = f.getHasProperty(PROP_GRAB_EQUIPPABLE_INDICATOR_OFFSET) ? result + "grab.EquippableIndicatorOffset " : result;

    result += "]";
    dbg.nospace() << result;
    return dbg;
}
