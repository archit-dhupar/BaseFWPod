#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class BasePlatform, BaseBaseContextFactory, BaseDatazoom, BaseDzAdapter, BaseConfig, BaseSdkEvent<T>, BaseCSharedFlow<T>, BaseEvent, BaseFluxData, BaseMetaData, BaseMetaDataType, BaseState, BaseMedia, BaseKotlinArray<T>, BaseDzAd, BaseDzAdEventType, BaseKotlinEnumCompanion, BaseKotlinEnum<E>, BaseConfigId, BaseConfigIdMain, BaseConfig_, BasePendingFlag, BaseFluxDataType, BasePreferenceType, BasePreference, BaseServerTimeOffsetPersistence, BaseDevice, BaseDiName, BaseEventEntry, BaseFlagsPersistence, BaseSendEventUseCase, BaseMetaDataStore, BaseFluxDataStore, BaseConfigStore, BaseSessionManager, BaseMessage, BaseSessionManagerSession, BasePreferenceStore, BaseEventType, BaseTransition, BaseTimerStateState, BaseTimerState, BaseKotlinThrowable, BaseLogLevel, BaseAppleLogger, BaseLoggerCompanion, BaseAdInfo, BaseAdvertisingInfo, BaseDeviceInfoCompanion, BaseDeviceInfo, BaseDeviceType, BaseEventApplicability, BaseNetworkInfo, BaseOrientation, BasePendingFlagCONFIG, BasePendingFlagGEO, BasePendingFlagSAMPLING, BasePendingFlagTIME_SYNC, BaseVideoType, BaseVideoTypeAD, BaseVideoTypeCONTENT, BaseResourceStatus, BaseResourceCompanion, BaseResource<__covariant T>, BaseNetworkClient, BaseEventManager, BaseGetGeoLocationFromIPUseCase, BaseServerTimeSyncUseCase, BaseConfig_DataPoints, BaseConfig_Endpoints, BaseConfig_Companion, BaseConfig_DataPointsEvent, BaseConfig_DataPointsCompanion, BaseConfig_DataPointsEventCompanion, BaseConfig_EndpointsCompanion, BaseEventResponse, BaseEventResponseEventReply, BaseEventResponseCompanion, BaseEventResponseEventReplyCompanion, BaseMessageEvent, BaseMessageCompanion, BaseMessageEventCompanion, BaseGeoResponse, BaseGeoResponseCompanion, BaseTimeSyncResponse, BaseTimeSyncResponseCompanion, BaseDzPlayerState, BaseTrackInfo, BaseDzPlayerStateBuffering, BaseDzPlayerStateEnded, BaseDzPlayerStateIdle, BaseDzPlayerStateReady, BaseNoMappingException, BaseStateCompanion, BaseStateAd, BaseStateAdBUFFERING, BaseStateAdBreak, BaseStateAdBreakENDED, BaseStateAdBreakSTARTED, BaseStateAdCOMPLETED, BaseStateAdERROR, BaseStateAdIDLE, BaseStateAdPAUSED, BaseStateAdPLAYING, BaseStateAdSEEKING, BaseStateAdSKIPPED, BaseStateAdSTOPPED, BaseStateContent, BaseStateContentBUFFERING, BaseStateContentCOMPLETED, BaseStateContentERROR, BaseStateContentIDLE, BaseStateContentPAUSED, BaseStateContentPLAYING, BaseStateContentREQUESTED, BaseStateContentSEEKING, BaseStateContentSTARTED, BaseStateContentSTOPPED, BaseStateMapping, BaseTime, BaseAnySerializer, BaseDurationsManager, BaseConfigCompanion, BaseConfigBuilder, BaseSdkEventAdapterCreated, BaseSdkEventSdkError, BaseSdkEventSdkInit, BaseDzAdEvent, BaseKotlinPair<__covariant A, __covariant B>, BaseKtor_client_coreHttpClientEngineConfig, BaseKtor_client_coreHttpClientConfig<T>, BaseKtor_client_coreHttpClient, BaseKtor_eventsEvents, BaseKtor_client_coreHttpReceivePipeline, BaseKtor_client_coreHttpRequestPipeline, BaseKtor_client_coreHttpResponsePipeline, BaseKtor_client_coreHttpSendPipeline, BaseKtor_client_coreHttpClientCall, BaseKtor_utilsGMTDate, BaseKtor_httpHttpStatusCode, BaseKtor_httpHttpProtocolVersion, BaseKtor_client_coreHttpResponse, BaseKotlinNumber, BaseKoin_coreModule, BaseKotlinLazyThreadSafetyMode, BaseKoin_coreParametersHolder, BaseStateTransitionProcessor, BaseKotlinException, BaseKotlinRuntimeException, BaseKotlinIllegalStateException, BaseKotlinx_serialization_coreSerializersModule, BaseKotlinx_serialization_coreSerialKind, BaseKotlinNothing, BaseKtor_client_coreHttpRequestData, BaseKtor_client_coreHttpResponseData, BaseKotlinx_coroutines_coreCoroutineDispatcher, BaseKtor_client_coreProxyConfig, BaseKtor_utilsAttributeKey<T>, BaseKtor_eventsEventDefinition<T>, BaseKtor_utilsPipelinePhase, BaseKtor_utilsPipeline<TSubject, TContext>, BaseKtor_client_coreHttpReceivePipelinePhases, BaseKotlinUnit, BaseKtor_client_coreHttpRequestPipelinePhases, BaseKtor_client_coreHttpRequestBuilder, BaseKtor_client_coreHttpResponsePipelinePhases, BaseKtor_client_coreHttpResponseContainer, BaseKtor_client_coreHttpSendPipelinePhases, BaseKtor_client_coreHttpClientCallCompanion, BaseKtor_utilsTypeInfo, BaseKtor_ioMemory, BaseKtor_ioChunkBuffer, BaseKtor_ioBuffer, BaseKotlinByteArray, BaseKtor_ioByteReadPacket, BaseKtor_utilsGMTDateCompanion, BaseKtor_utilsWeekDay, BaseKtor_utilsMonth, BaseKtor_httpHttpStatusCodeCompanion, BaseKtor_httpHttpProtocolVersionCompanion, BaseKoin_coreInstanceFactory<T>, BaseKoin_coreScope, BaseKoin_coreScopeDSL, BaseKoin_coreSingleInstanceFactory<T>, BaseKoin_coreParametersHolderCompanion, BaseKtor_httpUrl, BaseKtor_httpHttpMethod, BaseKtor_httpOutgoingContent, BaseKotlinAbstractCoroutineContextElement, BaseKotlinx_coroutines_coreCoroutineDispatcherKey, BaseKtor_httpHeadersBuilder, BaseKtor_client_coreHttpRequestBuilderCompanion, BaseKtor_httpURLBuilder, BaseKtor_ioMemoryCompanion, BaseKtor_ioBufferCompanion, BaseKtor_ioChunkBufferCompanion, BaseKotlinByteIterator, BaseKtor_ioInputCompanion, BaseKtor_ioInput, BaseKtor_ioByteReadPacketCompanion, BaseKtor_utilsWeekDayCompanion, BaseKtor_utilsMonthCompanion, BaseKoin_coreLockable, BaseKoin_coreBeanDefinition<T>, BaseKoin_coreInstanceFactoryCompanion, BaseKoin_coreInstanceContext, BaseKoin_coreKoin, BaseKoin_coreLogger, BaseKtor_httpUrlCompanion, BaseKtor_httpURLProtocol, BaseKtor_httpHttpMethodCompanion, BaseKtor_httpContentType, BaseKotlinCancellationException, BaseKotlinAbstractCoroutineContextKey<B, E>, BaseKtor_utilsStringValuesBuilderImpl, BaseKtor_httpURLBuilderCompanion, BaseKotlinKTypeProjection, BaseKoin_coreKind, BaseKoin_coreCallbacks<T>, BaseKoin_coreInstanceRegistry, BaseKoin_corePropertyRegistry, BaseKoin_coreScopeRegistry, BaseKoin_coreLevel, BaseKtor_httpURLProtocolCompanion, BaseKtor_httpHeaderValueParam, BaseKtor_httpHeaderValueWithParametersCompanion, BaseKtor_httpHeaderValueWithParameters, BaseKtor_httpContentTypeCompanion, BaseKotlinKVariance, BaseKotlinKTypeProjectionCompanion, BaseKoin_coreScopeRegistryCompanion;

@protocol BaseKotlinx_coroutines_coreFlowCollector, BaseKotlinx_coroutines_coreFlow, BaseKotlinx_coroutines_coreSharedFlow, BaseKtor_ioCloseable, BaseBaseContext, BaseKotlinComparable, BaseKotlinx_coroutines_coreCoroutineScope, BaseThreadingScope, BaseTakeCareJob, BaseKotlinx_coroutines_coreStateFlow, BaseMilestone, BaseLogger, BaseKotlinx_serialization_coreKSerializer, BaseDzPlayerListener, BaseDzPlayer, BaseStateMachine, BaseKotlinx_serialization_coreEncoder, BaseKotlinx_serialization_coreSerialDescriptor, BaseKotlinx_serialization_coreSerializationStrategy, BaseKotlinx_serialization_coreDecoder, BaseKotlinx_serialization_coreDeserializationStrategy, BaseKotlinCoroutineContext, BaseKtor_client_coreHttpClientEngine, BaseKtor_client_coreHttpClientEngineCapability, BaseKtor_utilsAttributes, BaseKtor_httpHeaders, BaseKtor_httpHttpMessage, BaseKtor_ioByteReadChannel, BaseKotlinLazy, BaseKoin_coreQualifier, BaseKotlinIterator, BaseKotlinx_serialization_coreCompositeEncoder, BaseKotlinAnnotation, BaseKotlinx_serialization_coreCompositeDecoder, BaseKotlinCoroutineContextElement, BaseKotlinCoroutineContextKey, BaseKtor_client_coreHttpClientPlugin, BaseKotlinx_coroutines_coreDisposableHandle, BaseKotlinSuspendFunction2, BaseKotlinMapEntry, BaseKtor_utilsStringValues, BaseKtor_client_coreHttpRequest, BaseKtor_ioReadSession, BaseKotlinSuspendFunction1, BaseKotlinAppendable, BaseKotlinKClass, BaseKotlinx_serialization_coreSerializersModuleCollector, BaseKotlinx_coroutines_coreJob, BaseKotlinContinuation, BaseKotlinContinuationInterceptor, BaseKotlinx_coroutines_coreRunnable, BaseKotlinFunction, BaseKtor_httpHttpMessageBuilder, BaseKotlinKType, BaseKtor_ioObjectPool, BaseKoin_coreScopeCallback, BaseKotlinKDeclarationContainer, BaseKotlinKAnnotatedElement, BaseKotlinKClassifier, BaseKtor_httpParameters, BaseKotlinx_coroutines_coreChildHandle, BaseKotlinx_coroutines_coreChildJob, BaseKotlinSequence, BaseKotlinx_coroutines_coreSelectClause0, BaseKtor_utilsStringValuesBuilder, BaseKtor_httpParametersBuilder, BaseKoin_coreKoinScopeComponent, BaseKotlinx_coroutines_coreParentJob, BaseKotlinx_coroutines_coreSelectInstance, BaseKotlinx_coroutines_coreSelectClause, BaseKoin_coreKoinComponent;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface BaseBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface BaseBase (BaseBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface BaseMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface BaseMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorBaseKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface BaseNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface BaseByte : BaseNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface BaseUByte : BaseNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface BaseShort : BaseNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface BaseUShort : BaseNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface BaseInt : BaseNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface BaseUInt : BaseNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface BaseLong : BaseNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface BaseULong : BaseNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface BaseFloat : BaseNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface BaseDouble : BaseNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface BaseBoolean : BaseNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol BaseKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<BaseKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol BaseKotlinx_coroutines_coreSharedFlow <BaseKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CSharedFlow")))
@interface BaseCSharedFlow<T> : BaseBase <BaseKotlinx_coroutines_coreSharedFlow>
- (instancetype)initWithOrigin:(id<BaseKotlinx_coroutines_coreSharedFlow>)origin __attribute__((swift_name("init(origin:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<BaseKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<BaseKtor_ioCloseable>)watchBlock:(void (^)(T _Nullable))block __attribute__((swift_name("watch(block:)")));
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface BasePlatform : BaseBase
- (instancetype)initWithVersion:(NSString *)version __attribute__((swift_name("init(version:)"))) __attribute__((objc_designated_initializer));
- (BasePlatform *)doCopyVersion:(NSString *)version __attribute__((swift_name("doCopy(version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("BaseContext")))
@protocol BaseBaseContext
@required
- (void)generateEventName:(NSString *)name payload:(NSDictionary<NSString *, id> *)payload __attribute__((swift_name("generateEvent(name:payload:)")));
- (NSDictionary<NSString *, id> *)getMetadata __attribute__((swift_name("getMetadata()")));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)setMetadataMetadata:(NSDictionary<NSString *, id> *)metadata __attribute__((swift_name("setMetadata(metadata:)")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseContextFactory")))
@interface BaseBaseContextFactory : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)baseContextFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseBaseContextFactory *shared __attribute__((swift_name("shared")));
- (id<BaseBaseContext>)create __attribute__((swift_name("create()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Datazoom")))
@interface BaseDatazoom : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)datazoom __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseDatazoom *shared __attribute__((swift_name("shared")));
- (void)clear __attribute__((swift_name("clear()")));
- (id<BaseBaseContext>)createBaseContext __attribute__((swift_name("createBaseContext()")));
- (BaseDzAdapter *)createContextAdapter:(BaseDzAdapter *)adapter __attribute__((swift_name("createContext(adapter:)")));
- (void)generateEventName:(NSString *)name payload:(NSDictionary<NSString *, id> *)payload __attribute__((swift_name("generateEvent(name:payload:)")));
- (NSArray<id<BaseBaseContext>> *)getBaseContexts __attribute__((swift_name("getBaseContexts()")));
- (NSDictionary<NSString *, id> *)getMetadata __attribute__((swift_name("getMetadata()")));
- (NSString *)getSessionId __attribute__((swift_name("getSessionId()")));
- (void)doInitConfig:(BaseConfig *)config __attribute__((swift_name("doInit(config:)")));
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
- (NSArray<BaseDzAdapter *> *)playerContexts __attribute__((swift_name("playerContexts()")));
- (void)removeBaseContextId:(NSString *)id __attribute__((swift_name("removeBaseContext(id:)")));
- (void)removeContextAdapter:(BaseDzAdapter *)adapter __attribute__((swift_name("removeContext(adapter:)")));
- (void)removeContextId:(NSString *)id __attribute__((swift_name("removeContext(id:)")));
- (void)setMetadataMetadata:(NSDictionary<NSString *, id> *)metadata __attribute__((swift_name("setMetadata(metadata:)")));
@property (readonly) BaseCSharedFlow<BaseSdkEvent<id> *> *sdkEvents __attribute__((swift_name("sdkEvents")));
@property (readonly) NSString *targetPlayer __attribute__((swift_name("targetPlayer")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("DzAdapter")))
@interface BaseDzAdapter : BaseBase
- (instancetype)initWithBaseContext:(id<BaseBaseContext>)baseContext __attribute__((swift_name("init(baseContext:)"))) __attribute__((objc_designated_initializer));
- (void)calculatePlayerData __attribute__((swift_name("calculatePlayerData()")));
- (void)generateEventName:(NSString *)name payload:(NSDictionary<NSString *, id> *)payload __attribute__((swift_name("generateEvent(name:payload:)")));
- (NSDictionary<NSString *, id> *)getMetadata __attribute__((swift_name("getMetadata()")));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onMuteChangeMute:(BOOL)mute __attribute__((swift_name("onMuteChange(mute:)")));
- (void)onRoutineJobCheck __attribute__((swift_name("onRoutineJobCheck()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onVolumeChangedDeviceVolume:(int64_t)deviceVolume __attribute__((swift_name("onVolumeChanged(deviceVolume:)")));
- (void)sendCastEventIsCasting:(BOOL)isCasting __attribute__((swift_name("sendCastEvent(isCasting:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)sendEventEvent:(BaseEvent *)event __attribute__((swift_name("sendEvent(event:)")));
- (void)setFluxDataFd:(BaseFluxData *)fd __attribute__((swift_name("setFluxData(fd:)")));
- (void)setGeneralMetaDataMd:(BaseMetaData *)md __attribute__((swift_name("setGeneralMetaData(md:)")));
- (void)setGeneralMetaDataType:(BaseMetaDataType *)type data:(id _Nullable)data __attribute__((swift_name("setGeneralMetaData(type:data:)")));
- (void)setMetadataMetadata:(NSDictionary<NSString *, id> *)metadata __attribute__((swift_name("setMetadata(metadata:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)setStateState:(BaseState *)state payload:(BaseMutableDictionary<NSString *, id> *)payload __attribute__((swift_name("setState(state:payload:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int64_t adDuration __attribute__((swift_name("adDuration")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t audioBitrate __attribute__((swift_name("audioBitrate")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t bitrate __attribute__((swift_name("bitrate")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int64_t bufferDuration __attribute__((swift_name("bufferDuration")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int64_t contentDuration __attribute__((swift_name("contentDuration")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BaseMedia * _Nullable currentMedia __attribute__((swift_name("currentMedia")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL defaultMuted __attribute__((swift_name("defaultMuted")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int64_t duration __attribute__((swift_name("duration")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) NSString *id __attribute__((swift_name("id")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BaseBoolean * _Nullable isContent __attribute__((swift_name("isContent")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL isFullScreen __attribute__((swift_name("isFullScreen")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BaseBoolean * _Nullable isLive __attribute__((swift_name("isLive")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL isMuted __attribute__((swift_name("isMuted")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL isPause __attribute__((swift_name("isPause")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL isPlaying __attribute__((swift_name("isPlaying")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL isPlayingAd __attribute__((swift_name("isPlayingAd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL isPlayingContent __attribute__((swift_name("isPlayingContent")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL isSessionAlive __attribute__((swift_name("isSessionAlive")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int64_t playHeadDuration __attribute__((swift_name("playHeadDuration")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL playWhenReady __attribute__((swift_name("playWhenReady")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *playerName __attribute__((swift_name("playerName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float speed __attribute__((swift_name("speed")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t versionCode __attribute__((swift_name("versionCode")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *versionName __attribute__((swift_name("versionName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t volume __attribute__((swift_name("volume")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DzAd")))
@interface BaseDzAd : BaseBase
- (instancetype)initWithId:(NSString *)id duration:(double)duration advertiserName:(NSString *)advertiserName adSystem:(NSString *)adSystem creativeId:(NSString *)creativeId skipTimeOffset:(double)skipTimeOffset wrapperId:(BaseKotlinArray<NSString *> *)wrapperId wrapperCreativeId:(BaseKotlinArray<NSString *> *)wrapperCreativeId wrapperAdSystem:(BaseKotlinArray<NSString *> *)wrapperAdSystem adClickUrl:(NSString * _Nullable)adClickUrl __attribute__((swift_name("init(id:duration:advertiserName:adSystem:creativeId:skipTimeOffset:wrapperId:wrapperCreativeId:wrapperAdSystem:adClickUrl:)"))) __attribute__((objc_designated_initializer));
- (BaseDzAd *)doCopyId:(NSString *)id duration:(double)duration advertiserName:(NSString *)advertiserName adSystem:(NSString *)adSystem creativeId:(NSString *)creativeId skipTimeOffset:(double)skipTimeOffset wrapperId:(BaseKotlinArray<NSString *> *)wrapperId wrapperCreativeId:(BaseKotlinArray<NSString *> *)wrapperCreativeId wrapperAdSystem:(BaseKotlinArray<NSString *> *)wrapperAdSystem adClickUrl:(NSString * _Nullable)adClickUrl __attribute__((swift_name("doCopy(id:duration:advertiserName:adSystem:creativeId:skipTimeOffset:wrapperId:wrapperCreativeId:wrapperAdSystem:adClickUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable adClickUrl __attribute__((swift_name("adClickUrl")));
@property (readonly) NSString *adSystem __attribute__((swift_name("adSystem")));
@property (readonly) NSString *advertiserName __attribute__((swift_name("advertiserName")));
@property (readonly) NSString *creativeId __attribute__((swift_name("creativeId")));
@property (readonly) double duration __attribute__((swift_name("duration")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) double skipTimeOffset __attribute__((swift_name("skipTimeOffset")));
@property (readonly) BaseKotlinArray<NSString *> *wrapperAdSystem __attribute__((swift_name("wrapperAdSystem")));
@property (readonly) BaseKotlinArray<NSString *> *wrapperCreativeId __attribute__((swift_name("wrapperCreativeId")));
@property (readonly) BaseKotlinArray<NSString *> *wrapperId __attribute__((swift_name("wrapperId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DzAdEvent")))
@interface BaseDzAdEvent : BaseBase
- (instancetype)initWithType:(BaseDzAdEventType *)type ad:(BaseDzAd * _Nullable)ad __attribute__((swift_name("init(type:ad:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BaseDzAd * _Nullable ad __attribute__((swift_name("ad")));
@property (readonly) BaseDzAdEventType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol BaseKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface BaseKotlinEnum<E> : BaseBase <BaseKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DzAdEventType")))
@interface BaseDzAdEventType : BaseKotlinEnum<BaseDzAdEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BaseDzAdEventType *allAdsCompleted __attribute__((swift_name("allAdsCompleted")));
@property (class, readonly) BaseDzAdEventType *adBreakFetchError __attribute__((swift_name("adBreakFetchError")));
@property (class, readonly) BaseDzAdEventType *clicked __attribute__((swift_name("clicked")));
@property (class, readonly) BaseDzAdEventType *completed __attribute__((swift_name("completed")));
@property (class, readonly) BaseDzAdEventType *cuepointsChanged __attribute__((swift_name("cuepointsChanged")));
@property (class, readonly) BaseDzAdEventType *contentPauseRequested __attribute__((swift_name("contentPauseRequested")));
@property (class, readonly) BaseDzAdEventType *contentResumeRequested __attribute__((swift_name("contentResumeRequested")));
@property (class, readonly) BaseDzAdEventType *firstQuartile __attribute__((swift_name("firstQuartile")));
@property (class, readonly) BaseDzAdEventType *log __attribute__((swift_name("log")));
@property (class, readonly) BaseDzAdEventType *adBreakReady __attribute__((swift_name("adBreakReady")));
@property (class, readonly) BaseDzAdEventType *midpoint __attribute__((swift_name("midpoint")));
@property (class, readonly) BaseDzAdEventType *paused __attribute__((swift_name("paused")));
@property (class, readonly) BaseDzAdEventType *resumed __attribute__((swift_name("resumed")));
@property (class, readonly) BaseDzAdEventType *skippableStateChanged __attribute__((swift_name("skippableStateChanged")));
@property (class, readonly) BaseDzAdEventType *skipped __attribute__((swift_name("skipped")));
@property (class, readonly) BaseDzAdEventType *started __attribute__((swift_name("started")));
@property (class, readonly) BaseDzAdEventType *tapped __attribute__((swift_name("tapped")));
@property (class, readonly) BaseDzAdEventType *iconTapped __attribute__((swift_name("iconTapped")));
@property (class, readonly) BaseDzAdEventType *iconFallbackImageClosed __attribute__((swift_name("iconFallbackImageClosed")));
@property (class, readonly) BaseDzAdEventType *thirdQuartile __attribute__((swift_name("thirdQuartile")));
@property (class, readonly) BaseDzAdEventType *loaded __attribute__((swift_name("loaded")));
@property (class, readonly) BaseDzAdEventType *adProgress __attribute__((swift_name("adProgress")));
@property (class, readonly) BaseDzAdEventType *adBuffering __attribute__((swift_name("adBuffering")));
@property (class, readonly) BaseDzAdEventType *adBreakStarted __attribute__((swift_name("adBreakStarted")));
@property (class, readonly) BaseDzAdEventType *adBreakEnded __attribute__((swift_name("adBreakEnded")));
@property (class, readonly) BaseDzAdEventType *adPeriodStarted __attribute__((swift_name("adPeriodStarted")));
@property (class, readonly) BaseDzAdEventType *adPeriodEnded __attribute__((swift_name("adPeriodEnded")));
+ (BaseKotlinArray<BaseDzAdEventType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BaseDzAdEventType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("CustomMetadata")))
@protocol BaseCustomMetadata
@required
- (BaseEvent *)customEventName:(NSString *)name payload:(NSDictionary<NSString *, id> *)payload __attribute__((swift_name("customEvent(name:payload:)")));
- (NSDictionary<NSString *, id> *)getCustomMetadata __attribute__((swift_name("getCustomMetadata()")));
- (void)setCustomMetadataMetadata:(NSDictionary<NSString *, id> *)metadata __attribute__((swift_name("setCustomMetadata(metadata:)")));
@end

__attribute__((swift_name("ConfigId")))
@interface BaseConfigId : BaseBase
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigId.Main")))
@interface BaseConfigIdMain : BaseConfigId
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)main __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseConfigIdMain *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigStore")))
@interface BaseConfigStore : BaseBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (BaseConfig_ * _Nullable)getConfigId:(BaseConfigId *)configId __attribute__((swift_name("get(configId:)")));
- (BOOL)saveConfigId:(BaseConfigId *)configId config:(BaseConfig_ *)config __attribute__((swift_name("save(configId:config:)")));
@property (readonly) id<BaseKotlinx_coroutines_coreSharedFlow> configState __attribute__((swift_name("configState")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlagsPersistence")))
@interface BaseFlagsPersistence : BaseBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addFlagFlag:(BasePendingFlag *)flag completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("addFlag(flag:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllFlagsWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllFlags(completionHandler:)")));
- (BOOL)flagApplied __attribute__((swift_name("flagApplied()")));
- (NSArray<BasePendingFlag *> *)getFlags __attribute__((swift_name("getFlags()")));
- (BOOL)isFlagAppliedFlag:(BasePendingFlag *)flag __attribute__((swift_name("isFlagApplied(flag:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFlagFlag:(BasePendingFlag *)flag completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("removeFlag(flag:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FluxDataStore")))
@interface BaseFluxDataStore : BaseBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (id _Nullable)clearType:(BaseFluxDataType *)type __attribute__((swift_name("clear(type:)")));
- (id _Nullable)getType:(BaseFluxDataType *)type __attribute__((swift_name("get(type:)")));
- (BaseMutableDictionary<NSString *, id> *)getAll __attribute__((swift_name("getAll()")));
- (void)mergeData:(BaseMutableDictionary<NSString *, id> *)data __attribute__((swift_name("merge(data:)")));
- (void)putFd:(BaseFluxData *)fd __attribute__((swift_name("put(fd:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetaDataStore")))
@interface BaseMetaDataStore : BaseBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (id _Nullable)getMetadata:(BaseMetaDataType *)metadata __attribute__((swift_name("get(metadata:)")));
- (BaseMutableDictionary<NSString *, id> *)getAll __attribute__((swift_name("getAll()")));
- (void)putMd:(BaseMetaData *)md __attribute__((swift_name("put(md:)")));
- (BaseMetaData *)putType:(BaseMetaDataType *)type data:(id)data __attribute__((swift_name("put(type:data:)")));
- (id _Nullable)removeMd:(BaseMetaData *)md __attribute__((swift_name("remove(md:)")));
- (void)removeList:(NSArray<BaseMetaDataType *> *)list __attribute__((swift_name("remove(list:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferenceStore")))
@interface BasePreferenceStore : BaseBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (id _Nullable)getType:(BasePreferenceType *)type __attribute__((swift_name("get(type:)")));
- (void)putPf:(BasePreference *)pf __attribute__((swift_name("put(pf:)")));
- (void)resetKey:(BasePreferenceType *)key __attribute__((swift_name("reset(key:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerTimeOffsetPersistence")))
@interface BaseServerTimeOffsetPersistence : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)serverTimeOffsetPersistence __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseServerTimeOffsetPersistence *shared __attribute__((swift_name("shared")));
- (int64_t)getServerTimeOffset __attribute__((swift_name("getServerTimeOffset()")));
- (void)setServerTimeOffsetRequestTime:(int64_t)requestTime responseTime:(int64_t)responseTime serverTime:(int64_t)serverTime __attribute__((swift_name("setServerTimeOffset(requestTime:responseTime:serverTime:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Device")))
@interface BaseDevice : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)device __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseDevice *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)randomIdWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("randomId(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiName")))
@interface BaseDiName : BaseKotlinEnum<BaseDiName *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BaseDiName *globalFluxStore __attribute__((swift_name("globalFluxStore")));
@property (class, readonly) BaseDiName *appSessionManager __attribute__((swift_name("appSessionManager")));
@property (class, readonly) BaseDiName *playerSessionManager __attribute__((swift_name("playerSessionManager")));
@property (class, readonly) BaseDiName *playerAdSessionManager __attribute__((swift_name("playerAdSessionManager")));
@property (class, readonly) BaseDiName *globalPrefManager __attribute__((swift_name("globalPrefManager")));
@property (class, readonly) BaseDiName *adapterPrefManager __attribute__((swift_name("adapterPrefManager")));
+ (BaseKotlinArray<BaseDiName *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BaseDiName *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventEntry")))
@interface BaseEventEntry : BaseBase
- (instancetype)initWithType:(NSString *)type time:(int64_t)time __attribute__((swift_name("init(type:time:)"))) __attribute__((objc_designated_initializer));
- (BaseEventEntry *)doCopyType:(NSString *)type time:(int64_t)time __attribute__((swift_name("doCopy(type:time:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t time __attribute__((swift_name("time")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("ThreadingScope")))
@protocol BaseThreadingScope
@required
@property (readonly) id<BaseKotlinx_coroutines_coreCoroutineScope> coroutineScope __attribute__((swift_name("coroutineScope")));
@property (readonly) id<BaseKotlinx_coroutines_coreSharedFlow> errorsState __attribute__((swift_name("errorsState")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventManager")))
@interface BaseEventManager : BaseBase <BaseThreadingScope>
- (instancetype)initWithFlagManager:(BaseFlagsPersistence *)flagManager eventSenderUseCase:(BaseSendEventUseCase *)eventSenderUseCase metadataStore:(BaseMetaDataStore *)metadataStore fluxDataStore:(BaseFluxDataStore *)fluxDataStore configStore:(BaseConfigStore *)configStore sessionManager:(BaseSessionManager *)sessionManager threading:(id<BaseThreadingScope>)threading __attribute__((swift_name("init(flagManager:eventSenderUseCase:metadataStore:fluxDataStore:configStore:sessionManager:threading:)"))) __attribute__((objc_designated_initializer));
- (void)addAndDispatchEvent:(BaseEvent *)event __attribute__((swift_name("addAndDispatch(event:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)configArrived __attribute__((swift_name("configArrived()")));
- (NSMutableArray<BaseMessage *> *)getMessageQueue __attribute__((swift_name("getMessageQueue()")));
- (NSMutableArray<BaseMessage *> *)getPendingQueue __attribute__((swift_name("getPendingQueue()")));
- (void)setGlobalCustomMetadataMetadata:(NSDictionary<NSString *, id> *)metadata __attribute__((swift_name("setGlobalCustomMetadata(metadata:)")));
@property (readonly) id<BaseKotlinx_coroutines_coreCoroutineScope> coroutineScope __attribute__((swift_name("coroutineScope")));
@property (readonly) id<BaseKotlinx_coroutines_coreSharedFlow> errorsState __attribute__((swift_name("errorsState")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionManager")))
@interface BaseSessionManager : BaseBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BaseSessionManagerSession *)currentSession __attribute__((swift_name("currentSession()")));
- (void)endSession __attribute__((swift_name("endSession()")));
- (BOOL)isAlive __attribute__((swift_name("isAlive()")));
- (BaseSessionManagerSession *)restartSession __attribute__((swift_name("restartSession()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionManager.Session")))
@interface BaseSessionManagerSession : BaseBase
- (instancetype)initWithTime:(int64_t)time id:(NSString *)id __attribute__((swift_name("init(time:id:)"))) __attribute__((objc_designated_initializer));
- (BaseSessionManagerSession *)doCopyTime:(int64_t)time id:(NSString *)id __attribute__((swift_name("doCopy(time:id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) int64_t time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateTransitionProcessor")))
@interface BaseStateTransitionProcessor : BaseBase
- (instancetype)initWithContentSessionManager:(BaseSessionManager *)contentSessionManager adSessionManager:(BaseSessionManager *)adSessionManager prefStore:(BasePreferenceStore *)prefStore globalPrefStore:(BasePreferenceStore *)globalPrefStore configStore:(BaseConfigStore *)configStore fluxData:(BaseFluxDataStore *)fluxData globalFlux:(BaseFluxDataStore *)globalFlux metadata:(BaseMetaDataStore *)metadata onNewSessionRequested:(void (^)(NSString *))onNewSessionRequested getEventTimeSince:(BaseLong *(^)(BaseEventType *))getEventTimeSince __attribute__((swift_name("init(contentSessionManager:adSessionManager:prefStore:globalPrefStore:configStore:fluxData:globalFlux:metadata:onNewSessionRequested:getEventTimeSince:)"))) __attribute__((objc_designated_initializer));
- (void)adBufferingStateOnEntryTransition:(BaseTransition *)transition sendEvent:(void (^)(BaseEvent *))sendEvent __attribute__((swift_name("adBufferingStateOnEntry(transition:sendEvent:)")));
- (void)adBufferingStateOnExitSendEvent:(void (^)(BaseEvent *))sendEvent __attribute__((swift_name("adBufferingStateOnExit(sendEvent:)")));
- (void)adPausedStateOnEntrySendEvent:(void (^)(BaseEvent *))sendEvent __attribute__((swift_name("adPausedStateOnEntry(sendEvent:)")));
- (void)adPlayingStateOnEntrySendEvent:(void (^)(BaseEvent *))sendEvent __attribute__((swift_name("adPlayingStateOnEntry(sendEvent:)")));
- (void)contentCompletedStateOnEntrySendEvent:(void (^)(BaseEvent *))sendEvent __attribute__((swift_name("contentCompletedStateOnEntry(sendEvent:)")));
- (void)handleAdErrorStateOnEntryPayload:(BaseMutableDictionary<NSString *, id> *)payload sendEvent:(void (^)(BaseEvent *))sendEvent __attribute__((swift_name("handleAdErrorStateOnEntry(payload:sendEvent:)")));
- (void)handleBufferingStateOnEntryTransition:(BaseTransition *)transition sendEvent:(void (^)(BaseEvent *))sendEvent __attribute__((swift_name("handleBufferingStateOnEntry(transition:sendEvent:)")));
- (void)handleBufferingStateOnExitSendEvent:(void (^)(BaseEvent *))sendEvent __attribute__((swift_name("handleBufferingStateOnExit(sendEvent:)")));
- (void)handleErrorStateOnEntryPayload:(BaseMutableDictionary<NSString *, id> *)payload sendEvent:(void (^)(BaseEvent *))sendEvent __attribute__((swift_name("handleErrorStateOnEntry(payload:sendEvent:)")));
- (void)handleRequestedStateOnEntrySendEvent:(void (^)(BaseEvent *))sendEvent __attribute__((swift_name("handleRequestedStateOnEntry(sendEvent:)")));
- (void)pausedStateOnEntrySendEvent:(void (^)(BaseEvent *))sendEvent __attribute__((swift_name("pausedStateOnEntry(sendEvent:)")));
- (void)playingStateOnEntrySendEvent:(void (^)(BaseEvent *))sendEvent __attribute__((swift_name("playingStateOnEntry(sendEvent:)")));
- (void)playingStateOnExit __attribute__((swift_name("playingStateOnExit()")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)seekingStateOnEntryMetadata:(BaseMutableDictionary<NSString *, id> *)metadata sendEvent:(void (^)(BaseEvent *))sendEvent __attribute__((swift_name("seekingStateOnEntry(metadata:sendEvent:)")));
- (void)stoppedStateOnEntrySendEvent:(void (^)(BaseEvent *))sendEvent __attribute__((swift_name("stoppedStateOnEntry(sendEvent:)")));
- (void)updateDurationsTimestamp:(int64_t)timestamp __attribute__((swift_name("updateDurations(timestamp:)")));
@end

__attribute__((swift_name("TakeCareJob")))
@protocol BaseTakeCareJob
@required
- (void)startIntervalMs:(int64_t)intervalMs __attribute__((swift_name("start(intervalMs:)")));
- (void)stop __attribute__((swift_name("stop()")));
@property (readonly) id<BaseKotlinx_coroutines_coreSharedFlow> timerTick __attribute__((swift_name("timerTick")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TakeCareJobImp")))
@interface BaseTakeCareJobImp : BaseBase <BaseTakeCareJob>
- (instancetype)initWithThreadingScope:(id<BaseThreadingScope>)threadingScope __attribute__((swift_name("init(threadingScope:)"))) __attribute__((objc_designated_initializer));
- (void)startIntervalMs:(int64_t)intervalMs __attribute__((swift_name("start(intervalMs:)")));
- (void)stop __attribute__((swift_name("stop()")));
@property (readonly) id<BaseKotlinx_coroutines_coreSharedFlow> timerTick __attribute__((swift_name("timerTick")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeStampsStore")))
@interface BaseTimeStampsStore : BaseBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addEventEntry:(BaseEventEntry *)entry __attribute__((swift_name("addEvent(entry:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (NSArray<BaseEventEntry *> *)getEventsById:(NSString *)id __attribute__((swift_name("getEventsBy(id:)")));
- (BaseEventEntry * _Nullable)lastEventById:(NSString *)id __attribute__((swift_name("lastEventBy(id:)")));
- (BaseLong * _Nullable)lastEventTimeById:(NSString *)id __attribute__((swift_name("lastEventTimeBy(id:)")));
- (BaseLong * _Nullable)timeSinceId:(NSString *)id current:(int64_t)current __attribute__((swift_name("timeSince(id:current:)")));
- (int64_t)totalEventTimeId:(NSString *)id __attribute__((swift_name("totalEventTime(id:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerState")))
@interface BaseTimerState : BaseBase
- (instancetype)initWithState:(BaseTimerStateState *)state time:(int64_t)time __attribute__((swift_name("init(state:time:)"))) __attribute__((objc_designated_initializer));
- (BaseTimerState *)doCopyState:(BaseTimerStateState *)state time:(int64_t)time __attribute__((swift_name("doCopy(state:time:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRunning __attribute__((swift_name("isRunning")));
@property (readonly) BaseTimerStateState *state __attribute__((swift_name("state")));
@property (readonly) int64_t time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerState.State")))
@interface BaseTimerStateState : BaseKotlinEnum<BaseTimerStateState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BaseTimerStateState *started __attribute__((swift_name("started")));
@property (class, readonly) BaseTimerStateState *stopped __attribute__((swift_name("stopped")));
@property (class, readonly) BaseTimerStateState *pulse __attribute__((swift_name("pulse")));
+ (BaseKotlinArray<BaseTimerStateState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BaseTimerStateState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HeartBeat")))
@interface BaseHeartBeat : BaseBase
- (instancetype)initWithFireHeartbeatEvent:(void (^)(void))fireHeartbeatEvent getConfigInterval:(BaseLong *(^)(void))getConfigInterval isContentSessionEnding:(BaseBoolean *(^)(void))isContentSessionEnding isContentOrAdPlaying:(BaseBoolean *(^)(void))isContentOrAdPlaying __attribute__((swift_name("init(fireHeartbeatEvent:getConfigInterval:isContentSessionEnding:isContentOrAdPlaying:)"))) __attribute__((objc_designated_initializer));
- (void)checkHeartbeat __attribute__((swift_name("checkHeartbeat()")));
- (void)onPlayHeadUpdate __attribute__((swift_name("onPlayHeadUpdate()")));
- (void)onPlayerStateChange __attribute__((swift_name("onPlayerStateChange()")));
@end

__attribute__((swift_name("Milestone")))
@protocol BaseMilestone
@required
- (void)reset __attribute__((swift_name("reset()")));
- (void)setTargetTarget:(NSArray<BaseInt *> *)target __attribute__((swift_name("setTarget(target:)")));
- (void)updateProgressProgress:(int64_t)progress duration:(int64_t)duration __attribute__((swift_name("updateProgress(progress:duration:)")));
@property (readonly) id<BaseKotlinx_coroutines_coreStateFlow> stateUpdate __attribute__((swift_name("stateUpdate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MilestoneImp")))
@interface BaseMilestoneImp : BaseBase <BaseMilestone>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)setTargetTarget:(NSArray<BaseInt *> *)target __attribute__((swift_name("setTarget(target:)")));
- (void)updateProgressProgress:(int64_t)progress duration:(int64_t)duration __attribute__((swift_name("updateProgress(progress:duration:)")));
@property (readonly) id<BaseKotlinx_coroutines_coreStateFlow> stateUpdate __attribute__((swift_name("stateUpdate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QualifiedMilestoneImp")))
@interface BaseQualifiedMilestoneImp : BaseBase <BaseMilestone>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)setTargetTarget:(NSArray<BaseInt *> *)target __attribute__((swift_name("setTarget(target:)")));
- (void)updateProgressProgress:(int64_t)progress duration:(int64_t)duration __attribute__((swift_name("updateProgress(progress:duration:)")));
@property (readonly) id<BaseKotlinx_coroutines_coreStateFlow> stateUpdate __attribute__((swift_name("stateUpdate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppInfoUseCase")))
@interface BaseAppInfoUseCase : BaseBase
- (instancetype)initWithStore:(BaseMetaDataStore *)store __attribute__((swift_name("init(store:)"))) __attribute__((objc_designated_initializer));
- (void)invoke __attribute__((swift_name("invoke()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDeviceInfoUseCase")))
@interface BaseGetDeviceInfoUseCase : BaseBase
- (instancetype)initWithMetaDataStore:(BaseMetaDataStore *)metaDataStore __attribute__((swift_name("init(metaDataStore:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetNetworkInfoUseCase")))
@interface BaseGetNetworkInfoUseCase : BaseBase
- (instancetype)initWithStorage:(BaseMetaDataStore *)storage __attribute__((swift_name("init(storage:)"))) __attribute__((objc_designated_initializer));
- (void)invoke __attribute__((swift_name("invoke()")));
@end

__attribute__((swift_name("Logger")))
@protocol BaseLogger
@required
- (void)dD:(NSString *)d __attribute__((swift_name("d(d:)")));
- (void)eE:(NSString *)e throwable:(BaseKotlinThrowable *)throwable __attribute__((swift_name("e(e:throwable:)")));
- (void)iI:(NSString *)i __attribute__((swift_name("i(i:)")));
- (void)setLevelLogLevel:(BaseLogLevel *)logLevel __attribute__((swift_name("setLevel(logLevel:)")));
- (void)vV:(NSString *)v __attribute__((swift_name("v(v:)")));
- (void)wW:(NSString *)w __attribute__((swift_name("w(w:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppleLogger")))
@interface BaseAppleLogger : BaseBase <BaseLogger>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)appleLogger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseAppleLogger *shared __attribute__((swift_name("shared")));
- (void)dD:(NSString *)d __attribute__((swift_name("d(d:)")));
- (void)eE:(NSString *)e throwable:(BaseKotlinThrowable *)throwable __attribute__((swift_name("e(e:throwable:)")));
- (void)iI:(NSString *)i __attribute__((swift_name("i(i:)")));
- (void)setLevelLogLevel:(BaseLogLevel *)logLevel __attribute__((swift_name("setLevel(logLevel:)")));
- (void)vV:(NSString *)v __attribute__((swift_name("v(v:)")));
- (void)wW:(NSString *)w __attribute__((swift_name("w(w:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogLevel")))
@interface BaseLogLevel : BaseKotlinEnum<BaseLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BaseLogLevel *off __attribute__((swift_name("off")));
@property (class, readonly) BaseLogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) BaseLogLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) BaseLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) BaseLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) BaseLogLevel *verbose __attribute__((swift_name("verbose")));
+ (BaseKotlinArray<BaseLogLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BaseLogLevel *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggerCompanion")))
@interface BaseLoggerCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseLoggerCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdInfo")))
@interface BaseAdInfo : BaseBase
- (instancetype)initWithId:(NSString *)id isLimitedAdTrackingEnabled:(BOOL)isLimitedAdTrackingEnabled __attribute__((swift_name("init(id:isLimitedAdTrackingEnabled:)"))) __attribute__((objc_designated_initializer));
- (BaseAdInfo *)doCopyId:(NSString *)id isLimitedAdTrackingEnabled:(BOOL)isLimitedAdTrackingEnabled __attribute__((swift_name("doCopy(id:isLimitedAdTrackingEnabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isLimitedAdTrackingEnabled __attribute__((swift_name("isLimitedAdTrackingEnabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdvertisingInfo")))
@interface BaseAdvertisingInfo : BaseBase
- (instancetype)initWithId:(NSString *)id isLimitAdTrackingEnabled:(BOOL)isLimitAdTrackingEnabled __attribute__((swift_name("init(id:isLimitAdTrackingEnabled:)"))) __attribute__((objc_designated_initializer));
- (BaseAdvertisingInfo *)doCopyId:(NSString *)id isLimitAdTrackingEnabled:(BOOL)isLimitAdTrackingEnabled __attribute__((swift_name("doCopy(id:isLimitAdTrackingEnabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isLimitAdTrackingEnabled __attribute__((swift_name("isLimitAdTrackingEnabled")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceInfo")))
@interface BaseDeviceInfo : BaseBase
- (instancetype)initWithManufacturer:(NSString *)manufacturer orientation:(NSString *)orientation name:(NSString *)name id:(NSString *)id osVersion:(NSString *)osVersion advertisingId:(NSString *)advertisingId isAdTrackingOptOut:(BOOL)isAdTrackingOptOut osName:(NSString *)osName type:(NSString *)type isFullScreen:(BOOL)isFullScreen __attribute__((swift_name("init(manufacturer:orientation:name:id:osVersion:advertisingId:isAdTrackingOptOut:osName:type:isFullScreen:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseDeviceInfoCompanion *companion __attribute__((swift_name("companion")));
- (BaseDeviceInfo *)doCopyManufacturer:(NSString *)manufacturer orientation:(NSString *)orientation name:(NSString *)name id:(NSString *)id osVersion:(NSString *)osVersion advertisingId:(NSString *)advertisingId isAdTrackingOptOut:(BOOL)isAdTrackingOptOut osName:(NSString *)osName type:(NSString *)type isFullScreen:(BOOL)isFullScreen __attribute__((swift_name("doCopy(manufacturer:orientation:name:id:osVersion:advertisingId:isAdTrackingOptOut:osName:type:isFullScreen:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="advertising_id")
*/
@property (readonly) NSString *advertisingId __attribute__((swift_name("advertisingId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device_id")
*/
@property (readonly) NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ad_tracking_opt_out")
*/
@property (readonly) BOOL isAdTrackingOptOut __attribute__((swift_name("isAdTrackingOptOut")));
@property (readonly) BOOL isFullScreen __attribute__((swift_name("isFullScreen")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device_mfg")
*/
@property (readonly) NSString *manufacturer __attribute__((swift_name("manufacturer")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device_name")
*/
@property (readonly) NSString *name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orientation")
*/
@property (readonly) NSString *orientation __attribute__((swift_name("orientation")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="os_name")
*/
@property (readonly) NSString *osName __attribute__((swift_name("osName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="os_version")
*/
@property (readonly) NSString *osVersion __attribute__((swift_name("osVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device_type")
*/
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceInfo.Companion")))
@interface BaseDeviceInfoCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseDeviceInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<BaseKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceType")))
@interface BaseDeviceType : BaseKotlinEnum<BaseDeviceType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BaseDeviceType *tablet __attribute__((swift_name("tablet")));
@property (class, readonly) BaseDeviceType *mobile __attribute__((swift_name("mobile")));
+ (BaseKotlinArray<BaseDeviceType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BaseDeviceType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event")))
@interface BaseEvent : BaseBase
- (instancetype)initWithType:(BaseEventType *)type metadata:(BaseMutableDictionary<NSString *, id> *)metadata fluxData:(BaseMutableDictionary<NSString *, id> *)fluxData custom:(BaseMutableDictionary<NSString *, id> *)custom time:(int64_t)time userDetails:(BaseMutableDictionary<NSString *, id> *)userDetails __attribute__((swift_name("init(type:metadata:fluxData:custom:time:userDetails:)"))) __attribute__((objc_designated_initializer));
- (BaseEvent *)doCopyType:(BaseEventType *)type metadata:(BaseMutableDictionary<NSString *, id> *)metadata fluxData:(BaseMutableDictionary<NSString *, id> *)fluxData custom:(BaseMutableDictionary<NSString *, id> *)custom time:(int64_t)time userDetails:(BaseMutableDictionary<NSString *, id> *)userDetails __attribute__((swift_name("doCopy(type:metadata:fluxData:custom:time:userDetails:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BaseMutableDictionary<NSString *, id> *custom __attribute__((swift_name("custom")));
@property (readonly) BaseMutableDictionary<NSString *, id> *fluxData __attribute__((swift_name("fluxData")));
@property (readonly) BaseMutableDictionary<NSString *, id> *metadata __attribute__((swift_name("metadata")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int64_t time __attribute__((swift_name("time")));
@property (readonly) BaseEventType *type __attribute__((swift_name("type")));
@property (readonly) BaseMutableDictionary<NSString *, id> *userDetails __attribute__((swift_name("userDetails")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event.Applicability")))
@interface BaseEventApplicability : BaseKotlinEnum<BaseEventApplicability *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BaseEventApplicability *ad __attribute__((swift_name("ad")));
@property (class, readonly) BaseEventApplicability *ct __attribute__((swift_name("ct")));
@property (class, readonly) BaseEventApplicability *ctAd __attribute__((swift_name("ctAd")));
@property (class, readonly) BaseEventApplicability *ss __attribute__((swift_name("ss")));
+ (BaseKotlinArray<BaseEventApplicability *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BaseEventApplicability *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event.Type_")))
@interface BaseEventType : BaseKotlinEnum<BaseEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BaseEventType *adbreakend __attribute__((swift_name("adbreakend")));
@property (class, readonly) BaseEventType *adbreakstart __attribute__((swift_name("adbreakstart")));
@property (class, readonly) BaseEventType *adclick __attribute__((swift_name("adclick")));
@property (class, readonly) BaseEventType *adcomplete __attribute__((swift_name("adcomplete")));
@property (class, readonly) BaseEventType *aderror __attribute__((swift_name("aderror")));
@property (class, readonly) BaseEventType *adfluxdata __attribute__((swift_name("adfluxdata")));
@property (class, readonly) BaseEventType *adimpression __attribute__((swift_name("adimpression")));
@property (class, readonly) BaseEventType *adloaded __attribute__((swift_name("adloaded")));
@property (class, readonly) BaseEventType *adpause __attribute__((swift_name("adpause")));
@property (class, readonly) BaseEventType *adplay __attribute__((swift_name("adplay")));
@property (class, readonly) BaseEventType *adrenditionchanged __attribute__((swift_name("adrenditionchanged")));
@property (class, readonly) BaseEventType *adrequest __attribute__((swift_name("adrequest")));
@property (class, readonly) BaseEventType *audiotrackchanged __attribute__((swift_name("audiotrackchanged")));
@property (class, readonly) BaseEventType *bitratechanged __attribute__((swift_name("bitratechanged")));
@property (class, readonly) BaseEventType *bufferend __attribute__((swift_name("bufferend")));
@property (class, readonly) BaseEventType *bufferstart __attribute__((swift_name("bufferstart")));
@property (class, readonly) BaseEventType *customevent __attribute__((swift_name("customevent")));
@property (class, readonly) BaseEventType *datazoomloaded __attribute__((swift_name("datazoomloaded")));
@property (class, readonly) BaseEventType *error __attribute__((swift_name("error")));
@property (class, readonly) BaseEventType *exitfullscreen __attribute__((swift_name("exitfullscreen")));
@property (class, readonly) BaseEventType *fluxdata __attribute__((swift_name("fluxdata")));
@property (class, readonly) BaseEventType *fullscreen __attribute__((swift_name("fullscreen")));
@property (class, readonly) BaseEventType *heartbeat __attribute__((swift_name("heartbeat")));
@property (class, readonly) BaseEventType *idle __attribute__((swift_name("idle")));
@property (class, readonly) BaseEventType *medialoaded __attribute__((swift_name("medialoaded")));
@property (class, readonly) BaseEventType *mediarequest __attribute__((swift_name("mediarequest")));
@property (class, readonly) BaseEventType *milestone __attribute__((swift_name("milestone")));
@property (class, readonly) BaseEventType *mute __attribute__((swift_name("mute")));
@property (class, readonly) BaseEventType *pause __attribute__((swift_name("pause")));
@property (class, readonly) BaseEventType *play __attribute__((swift_name("play")));
@property (class, readonly) BaseEventType *playbutton __attribute__((swift_name("playbutton")));
@property (class, readonly) BaseEventType *playbuttonad __attribute__((swift_name("playbuttonad")));
@property (class, readonly) BaseEventType *playrequest __attribute__((swift_name("playrequest")));
@property (class, readonly) BaseEventType *playbackcompleted __attribute__((swift_name("playbackcompleted")));
@property (class, readonly) BaseEventType *playbackerror __attribute__((swift_name("playbackerror")));
@property (class, readonly) BaseEventType *playbackstart __attribute__((swift_name("playbackstart")));
@property (class, readonly) BaseEventType *playbackstartad __attribute__((swift_name("playbackstartad")));
@property (class, readonly) BaseEventType *playerready __attribute__((swift_name("playerready")));
@property (class, readonly) BaseEventType *playing __attribute__((swift_name("playing")));
@property (class, readonly) BaseEventType *qualifiedview __attribute__((swift_name("qualifiedview")));
@property (class, readonly) BaseEventType *qualitychangerequest __attribute__((swift_name("qualitychangerequest")));
@property (class, readonly) BaseEventType *renditionchange __attribute__((swift_name("renditionchange")));
@property (class, readonly) BaseEventType *resize __attribute__((swift_name("resize")));
@property (class, readonly) BaseEventType *resume __attribute__((swift_name("resume")));
@property (class, readonly) BaseEventType *seekend __attribute__((swift_name("seekend")));
@property (class, readonly) BaseEventType *seekposition __attribute__((swift_name("seekposition")));
@property (class, readonly) BaseEventType *seekstart __attribute__((swift_name("seekstart")));
@property (class, readonly) BaseEventType *sessionend __attribute__((swift_name("sessionend")));
@property (class, readonly) BaseEventType *sessionstart __attribute__((swift_name("sessionstart")));
@property (class, readonly) BaseEventType *stallended __attribute__((swift_name("stallended")));
@property (class, readonly) BaseEventType *stallstarted __attribute__((swift_name("stallstarted")));
@property (class, readonly) BaseEventType *stop __attribute__((swift_name("stop")));
@property (class, readonly) BaseEventType *unmute __attribute__((swift_name("unmute")));
@property (class, readonly) BaseEventType *volumechange __attribute__((swift_name("volumechange")));
@property (class, readonly) BaseEventType *castend __attribute__((swift_name("castend")));
@property (class, readonly) BaseEventType *caststart __attribute__((swift_name("caststart")));
+ (BaseKotlinArray<BaseEventType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BaseEventType *> *entries __attribute__((swift_name("entries")));
@property (readonly) BaseEventApplicability *applicability __attribute__((swift_name("applicability")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FluxData")))
@interface BaseFluxData : BaseBase
- (instancetype)initWithType:(BaseFluxDataType *)type data:(id)data __attribute__((swift_name("init(type:data:)"))) __attribute__((objc_designated_initializer));
- (BaseFluxData *)doCopyType:(BaseFluxDataType *)type data:(id)data __attribute__((swift_name("doCopy(type:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id data __attribute__((swift_name("data")));
@property (readonly) BaseFluxDataType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FluxData.Type_")))
@interface BaseFluxDataType : BaseKotlinEnum<BaseFluxDataType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BaseFluxDataType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) BaseFluxDataType *bandwidth __attribute__((swift_name("bandwidth")));
@property (class, readonly) BaseFluxDataType *bandwidthKbps __attribute__((swift_name("bandwidthKbps")));
@property (class, readonly) BaseFluxDataType *bitrate __attribute__((swift_name("bitrate")));
@property (class, readonly) BaseFluxDataType *volumeLevel __attribute__((swift_name("volumeLevel")));
@property (class, readonly) BaseFluxDataType *playHeadPosition __attribute__((swift_name("playHeadPosition")));
@property (class, readonly) BaseFluxDataType *bufferFill __attribute__((swift_name("bufferFill")));
@property (class, readonly) BaseFluxDataType *playbackRate __attribute__((swift_name("playbackRate")));
@property (class, readonly) BaseFluxDataType *playerState __attribute__((swift_name("playerState")));
@property (class, readonly) BaseFluxDataType *numberOfVideos __attribute__((swift_name("numberOfVideos")));
@property (class, readonly) BaseFluxDataType *renditionHeight __attribute__((swift_name("renditionHeight")));
@property (class, readonly) BaseFluxDataType *renditionName __attribute__((swift_name("renditionName")));
@property (class, readonly) BaseFluxDataType *renditionAudioBitrate __attribute__((swift_name("renditionAudioBitrate")));
@property (class, readonly) BaseFluxDataType *renditionAudioBitrateKbps __attribute__((swift_name("renditionAudioBitrateKbps")));
@property (class, readonly) BaseFluxDataType *currentAudioTrack __attribute__((swift_name("currentAudioTrack")));
@property (class, readonly) BaseFluxDataType *renditionWidth __attribute__((swift_name("renditionWidth")));
@property (class, readonly) BaseFluxDataType *currentCaptions __attribute__((swift_name("currentCaptions")));
@property (class, readonly) BaseFluxDataType *timeSinceLastRenditionChange __attribute__((swift_name("timeSinceLastRenditionChange")));
@property (class, readonly) BaseFluxDataType *timeSincePaused __attribute__((swift_name("timeSincePaused")));
@property (class, readonly) BaseFluxDataType *timeSinceRequested __attribute__((swift_name("timeSinceRequested")));
@property (class, readonly) BaseFluxDataType *timeSinceStarted __attribute__((swift_name("timeSinceStarted")));
@property (class, readonly) BaseFluxDataType *numberOfErrorsContent __attribute__((swift_name("numberOfErrorsContent")));
@property (class, readonly) BaseFluxDataType *numberOfErrors __attribute__((swift_name("numberOfErrors")));
@property (class, readonly) BaseFluxDataType *numberOfVideosPlayed __attribute__((swift_name("numberOfVideosPlayed")));
@property (class, readonly) BaseFluxDataType *numberOfAdsRequested __attribute__((swift_name("numberOfAdsRequested")));
@property (class, readonly) BaseFluxDataType *totalBufferTime __attribute__((swift_name("totalBufferTime")));
@property (class, readonly) BaseFluxDataType *timeSinceAdRequested __attribute__((swift_name("timeSinceAdRequested")));
@property (class, readonly) BaseFluxDataType *timeSinceAdStarted __attribute__((swift_name("timeSinceAdStarted")));
@property (class, readonly) BaseFluxDataType *timeSinceLastAdRequested __attribute__((swift_name("timeSinceLastAdRequested")));
@property (class, readonly) BaseFluxDataType *timeSinceAdPaused __attribute__((swift_name("timeSinceAdPaused")));
@property (class, readonly) BaseFluxDataType *timeSinceAdBreakStart __attribute__((swift_name("timeSinceAdBreakStart")));
@property (class, readonly) BaseFluxDataType *timeSinceLastAdBreakStart __attribute__((swift_name("timeSinceLastAdBreakStart")));
@property (class, readonly) BaseFluxDataType *timeSinceLastAd __attribute__((swift_name("timeSinceLastAd")));
@property (class, readonly) BaseFluxDataType *numberOfAds __attribute__((swift_name("numberOfAds")));
@property (class, readonly) BaseFluxDataType *numberOfAdsPlayed __attribute__((swift_name("numberOfAdsPlayed")));
@property (class, readonly) BaseFluxDataType *numberOfAdsBreakPlayed __attribute__((swift_name("numberOfAdsBreakPlayed")));
@property (class, readonly) BaseFluxDataType *timeSinceLastMilestone __attribute__((swift_name("timeSinceLastMilestone")));
@property (class, readonly) BaseFluxDataType *timeSinceLastAdMilestone __attribute__((swift_name("timeSinceLastAdMilestone")));
@property (class, readonly) BaseFluxDataType *timeSinceLastHeartbeat __attribute__((swift_name("timeSinceLastHeartbeat")));
@property (class, readonly) BaseFluxDataType *viewStartTimestamp __attribute__((swift_name("viewStartTimestamp")));
@property (class, readonly) BaseFluxDataType *timeSinceBufferStart __attribute__((swift_name("timeSinceBufferStart")));
@property (class, readonly) BaseFluxDataType *timeSinceSeekStart __attribute__((swift_name("timeSinceSeekStart")));
@property (class, readonly) BaseFluxDataType *timeSinceStallStart __attribute__((swift_name("timeSinceStallStart")));
@property (class, readonly) BaseFluxDataType *timeSinceLastStallStartContentMs __attribute__((swift_name("timeSinceLastStallStartContentMs")));
@property (class, readonly) BaseFluxDataType *playbackDuration __attribute__((swift_name("playbackDuration")));
@property (class, readonly) BaseFluxDataType *playbackDurationAds __attribute__((swift_name("playbackDurationAds")));
@property (class, readonly) BaseFluxDataType *pauseDurationContentMs __attribute__((swift_name("pauseDurationContentMs")));
@property (class, readonly) BaseFluxDataType *pauseDurationAdsMs __attribute__((swift_name("pauseDurationAdsMs")));
@property (class, readonly) BaseFluxDataType *startupDurationTotalMs __attribute__((swift_name("startupDurationTotalMs")));
@property (class, readonly) BaseFluxDataType *engagementDuration __attribute__((swift_name("engagementDuration")));
@property (class, readonly) BaseFluxDataType *renditionVideoBitrate __attribute__((swift_name("renditionVideoBitrate")));
@property (class, readonly) BaseFluxDataType *playerViewable __attribute__((swift_name("playerViewable")));
@property (class, readonly) BaseFluxDataType *playbackStallDuration __attribute__((swift_name("playbackStallDuration")));
@property (class, readonly) BaseFluxDataType *playbackStallCount __attribute__((swift_name("playbackStallCount")));
@property (class, readonly) BaseFluxDataType *playbackStallDurationAds __attribute__((swift_name("playbackStallDurationAds")));
@property (class, readonly) BaseFluxDataType *playbackStallDurationContent __attribute__((swift_name("playbackStallDurationContent")));
@property (class, readonly) BaseFluxDataType *playbackStallCountAds __attribute__((swift_name("playbackStallCountAds")));
@property (class, readonly) BaseFluxDataType *playbackStallCountContent __attribute__((swift_name("playbackStallCountContent")));
@property (class, readonly) BaseFluxDataType *contentSessionStartTsMs __attribute__((swift_name("contentSessionStartTsMs")));
@property (class, readonly) BaseFluxDataType *currentSubtitles __attribute__((swift_name("currentSubtitles")));
@property (class, readonly) BaseFluxDataType *numRequestsContent __attribute__((swift_name("numRequestsContent")));
@property (class, readonly) BaseFluxDataType *playbackDurationContentMs __attribute__((swift_name("playbackDurationContentMs")));
@property (class, readonly) BaseFluxDataType *renditionVideoBitrateKbps __attribute__((swift_name("renditionVideoBitrateKbps")));
@property (class, readonly) BaseFluxDataType *stallCountAds __attribute__((swift_name("stallCountAds")));
@property (class, readonly) BaseFluxDataType *stallCountContent __attribute__((swift_name("stallCountContent")));
@property (class, readonly) BaseFluxDataType *stallDurationMs __attribute__((swift_name("stallDurationMs")));
@property (class, readonly) BaseFluxDataType *stallDurationContentMs __attribute__((swift_name("stallDurationContentMs")));
@property (class, readonly) BaseFluxDataType *stallDurationAdsMs __attribute__((swift_name("stallDurationAdsMs")));
@property (class, readonly) BaseFluxDataType *timeSinceBufferStartMs __attribute__((swift_name("timeSinceBufferStartMs")));
@property (class, readonly) BaseFluxDataType *timeSinceLastAdCompletedMs __attribute__((swift_name("timeSinceLastAdCompletedMs")));
@property (class, readonly) BaseFluxDataType *eventCount __attribute__((swift_name("eventCount")));
@property (class, readonly) BaseFluxDataType *numberOfErrorsAd __attribute__((swift_name("numberOfErrorsAd")));
@property (class, readonly) BaseFluxDataType *bufferDurationContentMs __attribute__((swift_name("bufferDurationContentMs")));
@property (class, readonly) BaseFluxDataType *bufferDurationAdsMs __attribute__((swift_name("bufferDurationAdsMs")));
@property (class, readonly) BaseFluxDataType *bufferLengthMs __attribute__((swift_name("bufferLengthMs")));
@property (class, readonly) BaseFluxDataType *bufferDurationMs __attribute__((swift_name("bufferDurationMs")));
@property (class, readonly) BaseFluxDataType *pauseDurationMs __attribute__((swift_name("pauseDurationMs")));
@property (class, readonly) BaseFluxDataType *timeSinceLastBufferStartContentMs __attribute__((swift_name("timeSinceLastBufferStartContentMs")));
@property (class, readonly) BaseFluxDataType *playerViewablePercent __attribute__((swift_name("playerViewablePercent")));
+ (BaseKotlinArray<BaseFluxDataType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BaseFluxDataType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("LightList")))
@interface BaseLightList : NSObject
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Media")))
@interface BaseMedia : BaseBase
- (instancetype)initWithTitle:(NSString * _Nullable)title secondaryTitle:(NSString * _Nullable)secondaryTitle url:(NSString * _Nullable)url closeCaptionLang:(NSString * _Nullable)closeCaptionLang mimeType:(NSString * _Nullable)mimeType assetId:(NSString * _Nullable)assetId __attribute__((swift_name("init(title:secondaryTitle:url:closeCaptionLang:mimeType:assetId:)"))) __attribute__((objc_designated_initializer));
- (BaseMedia *)doCopyTitle:(NSString * _Nullable)title secondaryTitle:(NSString * _Nullable)secondaryTitle url:(NSString * _Nullable)url closeCaptionLang:(NSString * _Nullable)closeCaptionLang mimeType:(NSString * _Nullable)mimeType assetId:(NSString * _Nullable)assetId __attribute__((swift_name("doCopy(title:secondaryTitle:url:closeCaptionLang:mimeType:assetId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable assetId __attribute__((swift_name("assetId")));
@property (readonly) NSString * _Nullable closeCaptionLang __attribute__((swift_name("closeCaptionLang")));
@property (readonly) NSString * _Nullable mimeType __attribute__((swift_name("mimeType")));
@property (readonly) NSString * _Nullable secondaryTitle __attribute__((swift_name("secondaryTitle")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetaData")))
@interface BaseMetaData : BaseBase
- (instancetype)initWithType:(BaseMetaDataType *)type data:(id)data __attribute__((swift_name("init(type:data:)"))) __attribute__((objc_designated_initializer));
- (BaseMetaData *)doCopyType:(BaseMetaDataType *)type data:(id)data __attribute__((swift_name("doCopy(type:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id data __attribute__((swift_name("data")));
@property (readonly) BaseMetaDataType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetaData.Type_")))
@interface BaseMetaDataType : BaseKotlinEnum<BaseMetaDataType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BaseMetaDataType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) BaseMetaDataType *autoStart __attribute__((swift_name("autoStart")));
@property (class, readonly) BaseMetaDataType *controls __attribute__((swift_name("controls")));
@property (class, readonly) BaseMetaDataType *isLimitedAdTrackingEnabled __attribute__((swift_name("isLimitedAdTrackingEnabled")));
@property (class, readonly) BaseMetaDataType *userAgent __attribute__((swift_name("userAgent")));
@property (class, readonly) BaseMetaDataType *duration __attribute__((swift_name("duration")));
@property (class, readonly) BaseMetaDataType *error __attribute__((swift_name("error")));
@property (class, readonly) BaseMetaDataType *fullscreen __attribute__((swift_name("fullscreen")));
@property (class, readonly) BaseMetaDataType *clientIp __attribute__((swift_name("clientIp")));
@property (class, readonly) BaseMetaDataType *latitude __attribute__((swift_name("latitude")));
@property (class, readonly) BaseMetaDataType *longitude __attribute__((swift_name("longitude")));
@property (class, readonly) BaseMetaDataType *os __attribute__((swift_name("os")));
@property (class, readonly) BaseMetaDataType *osVersion __attribute__((swift_name("osVersion")));
@property (class, readonly) BaseMetaDataType *osName __attribute__((swift_name("osName")));
@property (class, readonly) BaseMetaDataType *paused __attribute__((swift_name("paused")));
@property (class, readonly) BaseMetaDataType *playerName __attribute__((swift_name("playerName")));
@property (class, readonly) BaseMetaDataType *playerVersion __attribute__((swift_name("playerVersion")));
@property (class, readonly) BaseMetaDataType *source __attribute__((swift_name("source")));
@property (class, readonly) BaseMetaDataType *title __attribute__((swift_name("title")));
@property (class, readonly) BaseMetaDataType *volumeLevel __attribute__((swift_name("volumeLevel")));
@property (class, readonly) BaseMetaDataType *ended __attribute__((swift_name("ended")));
@property (class, readonly) BaseMetaDataType *startupDurationTotalMs __attribute__((swift_name("startupDurationTotalMs")));
@property (class, readonly) BaseMetaDataType *startupDurationContentMs __attribute__((swift_name("startupDurationContentMs")));
@property (class, readonly) BaseMetaDataType *loop __attribute__((swift_name("loop")));
@property (class, readonly) BaseMetaDataType *readyState __attribute__((swift_name("readyState")));
@property (class, readonly) BaseMetaDataType *streamingProtocol __attribute__((swift_name("streamingProtocol")));
@property (class, readonly) BaseMetaDataType *seeking __attribute__((swift_name("seeking")));
@property (class, readonly) BaseMetaDataType *streamingType __attribute__((swift_name("streamingType")));
@property (class, readonly) BaseMetaDataType *asn __attribute__((swift_name("asn")));
@property (class, readonly) BaseMetaDataType *asnOrganization __attribute__((swift_name("asnOrganization")));
@property (class, readonly) BaseMetaDataType *cdn __attribute__((swift_name("cdn")));
@property (class, readonly) BaseMetaDataType *city __attribute__((swift_name("city")));
@property (class, readonly) BaseMetaDataType *countryCode __attribute__((swift_name("countryCode")));
@property (class, readonly) BaseMetaDataType *regionCode __attribute__((swift_name("regionCode")));
@property (class, readonly) BaseMetaDataType *isp __attribute__((swift_name("isp")));
@property (class, readonly) BaseMetaDataType *absShift __attribute__((swift_name("absShift")));
@property (class, readonly) BaseMetaDataType *audioTracks __attribute__((swift_name("audioTracks")));
@property (class, readonly) BaseMetaDataType *defaultMuted __attribute__((swift_name("defaultMuted")));
@property (class, readonly) BaseMetaDataType *muted __attribute__((swift_name("muted")));
@property (class, readonly) BaseMetaDataType *language __attribute__((swift_name("language")));
@property (class, readonly) BaseMetaDataType *isMuted __attribute__((swift_name("isMuted")));
@property (class, readonly) BaseMetaDataType *contentId __attribute__((swift_name("contentId")));
@property (class, readonly) BaseMetaDataType *description_ __attribute__((swift_name("description_")));
@property (class, readonly) BaseMetaDataType *videoType __attribute__((swift_name("videoType")));
@property (class, readonly) BaseMetaDataType *country __attribute__((swift_name("country")));
@property (class, readonly) BaseMetaDataType *region __attribute__((swift_name("region")));
@property (class, readonly) BaseMetaDataType *postalCode __attribute__((swift_name("postalCode")));
@property (class, readonly) BaseMetaDataType *orientation __attribute__((swift_name("orientation")));
@property (class, readonly) BaseMetaDataType *connectionType __attribute__((swift_name("connectionType")));
@property (class, readonly) BaseMetaDataType *advertisingId __attribute__((swift_name("advertisingId")));
@property (class, readonly) BaseMetaDataType *adTrackingOptOut __attribute__((swift_name("adTrackingOptOut")));
@property (class, readonly) BaseMetaDataType *deviceId __attribute__((swift_name("deviceId")));
@property (class, readonly) BaseMetaDataType *deviceName __attribute__((swift_name("deviceName")));
@property (class, readonly) BaseMetaDataType *deviceType __attribute__((swift_name("deviceType")));
@property (class, readonly) BaseMetaDataType *sessionStartTimestamp __attribute__((swift_name("sessionStartTimestamp")));
@property (class, readonly) BaseMetaDataType *adId __attribute__((swift_name("adId")));
@property (class, readonly) BaseMetaDataType *district __attribute__((swift_name("district")));
@property (class, readonly) BaseMetaDataType *continent __attribute__((swift_name("continent")));
@property (class, readonly) BaseMetaDataType *continentCode __attribute__((swift_name("continentCode")));
@property (class, readonly) BaseMetaDataType *playbackRateDefault __attribute__((swift_name("playbackRateDefault")));
@property (class, readonly) BaseMetaDataType *advertiserName __attribute__((swift_name("advertiserName")));
@property (class, readonly) BaseMetaDataType *adPosition __attribute__((swift_name("adPosition")));
@property (class, readonly) BaseMetaDataType *dzSdkVersion __attribute__((swift_name("dzSdkVersion")));
@property (class, readonly) BaseMetaDataType *milestonePercent __attribute__((swift_name("milestonePercent")));
@property (class, readonly) BaseMetaDataType *fromMillis __attribute__((swift_name("fromMillis")));
@property (class, readonly) BaseMetaDataType *toMillis __attribute__((swift_name("toMillis")));
@property (class, readonly) BaseMetaDataType *errorCode __attribute__((swift_name("errorCode")));
@property (class, readonly) BaseMetaDataType *errorMsg __attribute__((swift_name("errorMsg")));
@property (class, readonly) BaseMetaDataType *adTimeOffset __attribute__((swift_name("adTimeOffset")));
@property (class, readonly) BaseMetaDataType *sessionId __attribute__((swift_name("sessionId")));
@property (class, readonly) BaseMetaDataType *subtitles __attribute__((swift_name("subtitles")));
@property (class, readonly) BaseMetaDataType *sid __attribute__((swift_name("sid")));
@property (class, readonly) BaseMetaDataType *playerHeight __attribute__((swift_name("playerHeight")));
@property (class, readonly) BaseMetaDataType *playerWidth __attribute__((swift_name("playerWidth")));
@property (class, readonly) BaseMetaDataType *seekEndPoint __attribute__((swift_name("seekEndPoint")));
@property (class, readonly) BaseMetaDataType *seekStartPoint __attribute__((swift_name("seekStartPoint")));
@property (class, readonly) BaseMetaDataType *viewId __attribute__((swift_name("viewId")));
@property (class, readonly) BaseMetaDataType *assetId __attribute__((swift_name("assetId")));
@property (class, readonly) BaseMetaDataType *heartbeatCount __attribute__((swift_name("heartbeatCount")));
@property (class, readonly) BaseMetaDataType *eventCount __attribute__((swift_name("eventCount")));
@property (class, readonly) BaseMetaDataType *frameRate __attribute__((swift_name("frameRate")));
@property (class, readonly) BaseMetaDataType *contentStartupDuration __attribute__((swift_name("contentStartupDuration")));
@property (class, readonly) BaseMetaDataType *wrapperSystems __attribute__((swift_name("wrapperSystems")));
@property (class, readonly) BaseMetaDataType *wrapperCreativeIds __attribute__((swift_name("wrapperCreativeIds")));
@property (class, readonly) BaseMetaDataType *wrapperId __attribute__((swift_name("wrapperId")));
@property (class, readonly) BaseMetaDataType *adSystem __attribute__((swift_name("adSystem")));
@property (class, readonly) BaseMetaDataType *adClickUrl __attribute__((swift_name("adClickUrl")));
@property (class, readonly) BaseMetaDataType *totalStartupDuration __attribute__((swift_name("totalStartupDuration")));
@property (class, readonly) BaseMetaDataType *deviceMfg __attribute__((swift_name("deviceMfg")));
@property (class, readonly) BaseMetaDataType *serverTsMillisOffset __attribute__((swift_name("serverTsMillisOffset")));
@property (class, readonly) BaseMetaDataType *adBlocker __attribute__((swift_name("adBlocker")));
@property (class, readonly) BaseMetaDataType *adCreativeId __attribute__((swift_name("adCreativeId")));
@property (class, readonly) BaseMetaDataType *adPartner __attribute__((swift_name("adPartner")));
@property (class, readonly) BaseMetaDataType *adSkipped __attribute__((swift_name("adSkipped")));
@property (class, readonly) BaseMetaDataType *timestamp __attribute__((swift_name("timestamp")));
@property (class, readonly) BaseMetaDataType *type __attribute__((swift_name("type")));
@property (class, readonly) BaseMetaDataType *pageTitle __attribute__((swift_name("pageTitle")));
@property (class, readonly) BaseMetaDataType *pageUrl __attribute__((swift_name("pageUrl")));
@property (class, readonly) BaseMetaDataType *refferUrl __attribute__((swift_name("refferUrl")));
@property (class, readonly) BaseMetaDataType *autostart __attribute__((swift_name("autostart")));
@property (class, readonly) BaseMetaDataType *preload __attribute__((swift_name("preload")));
@property (class, readonly) BaseMetaDataType *configurationId __attribute__((swift_name("configurationId")));
@property (class, readonly) BaseMetaDataType *eventId __attribute__((swift_name("eventId")));
@property (class, readonly) BaseMetaDataType *appSessionId __attribute__((swift_name("appSessionId")));
@property (class, readonly) BaseMetaDataType *appSessionStartTsMs __attribute__((swift_name("appSessionStartTsMs")));
@property (class, readonly) BaseMetaDataType *contentSessionId __attribute__((swift_name("contentSessionId")));
@property (class, readonly) BaseMetaDataType *mediaType __attribute__((swift_name("mediaType")));
@property (class, readonly) BaseMetaDataType *customerCode __attribute__((swift_name("customerCode")));
@property (class, readonly) BaseMetaDataType *siteDomain __attribute__((swift_name("siteDomain")));
@property (class, readonly) BaseMetaDataType *adDurationSec __attribute__((swift_name("adDurationSec")));
@property (class, readonly) BaseMetaDataType *requestId __attribute__((swift_name("requestId")));
@property (class, readonly) BaseMetaDataType *casting __attribute__((swift_name("casting")));
@property (class, readonly) BaseMetaDataType *adBreakId __attribute__((swift_name("adBreakId")));
@property (class, readonly) BaseMetaDataType *adSessionId __attribute__((swift_name("adSessionId")));
@property (class, readonly) BaseMetaDataType *timezoneOffset __attribute__((swift_name("timezoneOffset")));
@property (class, readonly) BaseMetaDataType *timezoneName __attribute__((swift_name("timezoneName")));
@property (class, readonly) BaseMetaDataType *mobileConnection __attribute__((swift_name("mobileConnection")));
@property (class, readonly) BaseMetaDataType *downloaded __attribute__((swift_name("downloaded")));
@property (class, readonly) BaseMetaDataType *qualifiedViewSec __attribute__((swift_name("qualifiedViewSec")));
+ (BaseKotlinArray<BaseMetaDataType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BaseMetaDataType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkInfo")))
@interface BaseNetworkInfo : BaseBase
- (instancetype)initWithIsMobileConnection:(BOOL)isMobileConnection userAgent:(NSString *)userAgent __attribute__((swift_name("init(isMobileConnection:userAgent:)"))) __attribute__((objc_designated_initializer));
- (BaseNetworkInfo *)doCopyIsMobileConnection:(BOOL)isMobileConnection userAgent:(NSString *)userAgent __attribute__((swift_name("doCopy(isMobileConnection:userAgent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isMobileConnection __attribute__((swift_name("isMobileConnection")));
@property (readonly) NSString *userAgent __attribute__((swift_name("userAgent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Orientation")))
@interface BaseOrientation : BaseKotlinEnum<BaseOrientation *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BaseOrientation *landscape __attribute__((swift_name("landscape")));
@property (class, readonly) BaseOrientation *portrait __attribute__((swift_name("portrait")));
+ (BaseKotlinArray<BaseOrientation *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BaseOrientation *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("PendingFlag")))
@interface BasePendingFlag : BaseBase
- (BOOL)isSoftFlag __attribute__((swift_name("isSoftFlag()")));
@property (readonly) int64_t softFlagTimeout __attribute__((swift_name("softFlagTimeout")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PendingFlag.CONFIG")))
@interface BasePendingFlagCONFIG : BasePendingFlag
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cONFIG __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BasePendingFlagCONFIG *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PendingFlag.GEO")))
@interface BasePendingFlagGEO : BasePendingFlag
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)gEO __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BasePendingFlagGEO *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PendingFlag.SAMPLING")))
@interface BasePendingFlagSAMPLING : BasePendingFlag
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sAMPLING __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BasePendingFlagSAMPLING *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PendingFlag.TIME_SYNC")))
@interface BasePendingFlagTIME_SYNC : BasePendingFlag
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tIME_SYNC __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BasePendingFlagTIME_SYNC *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Preference")))
@interface BasePreference : BaseBase
- (instancetype)initWithKey:(BasePreferenceType *)key value:(id)value __attribute__((swift_name("init(key:value:)"))) __attribute__((objc_designated_initializer));
- (BasePreference *)doCopyKey:(BasePreferenceType *)key value:(id)value __attribute__((swift_name("doCopy(key:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BasePreferenceType *key __attribute__((swift_name("key")));
@property (readonly) id value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Preference.Type_")))
@interface BasePreferenceType : BaseKotlinEnum<BasePreferenceType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BasePreferenceType *playhead __attribute__((swift_name("playhead")));
@property (class, readonly) BasePreferenceType *isstalling __attribute__((swift_name("isstalling")));
@property (class, readonly) BasePreferenceType *isctstarted __attribute__((swift_name("isctstarted")));
@property (class, readonly) BasePreferenceType *isctpaused __attribute__((swift_name("isctpaused")));
@property (class, readonly) BasePreferenceType *ismuted __attribute__((swift_name("ismuted")));
@property (class, readonly) BasePreferenceType *contentplayed __attribute__((swift_name("contentplayed")));
@property (class, readonly) BasePreferenceType *contentrequested __attribute__((swift_name("contentrequested")));
@property (class, readonly) BasePreferenceType *lastupdateduration __attribute__((swift_name("lastupdateduration")));
@property (class, readonly) BasePreferenceType *lastcontentupdateduration __attribute__((swift_name("lastcontentupdateduration")));
@property (class, readonly) BasePreferenceType *heartbeatcount __attribute__((swift_name("heartbeatcount")));
@property (class, readonly) BasePreferenceType *nextheartbeattime __attribute__((swift_name("nextheartbeattime")));
@property (class, readonly) BasePreferenceType *isadstarted __attribute__((swift_name("isadstarted")));
@property (class, readonly) BasePreferenceType *isadpaused __attribute__((swift_name("isadpaused")));
@property (class, readonly) BasePreferenceType *lastdurupdatetime __attribute__((swift_name("lastdurupdatetime")));
@property (class, readonly) BasePreferenceType *adposupdatetime __attribute__((swift_name("adposupdatetime")));
@property (class, readonly) BasePreferenceType *currentstate __attribute__((swift_name("currentstate")));
@property (class, readonly) BasePreferenceType *totaladbreaktime __attribute__((swift_name("totaladbreaktime")));
@property (class, readonly) BasePreferenceType *totaladplaybacktime __attribute__((swift_name("totaladplaybacktime")));
+ (BaseKotlinArray<BasePreferenceType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BasePreferenceType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("VideoType")))
@interface BaseVideoType : BaseBase
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoType.AD")))
@interface BaseVideoTypeAD : BaseVideoType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)aD __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseVideoTypeAD *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoType.CONTENT")))
@interface BaseVideoTypeCONTENT : BaseVideoType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cONTENT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseVideoTypeCONTENT *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkClient")))
@interface BaseNetworkClient : BaseBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString *brokerUrl __attribute__((swift_name("brokerUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Resource")))
@interface BaseResource<__covariant T> : BaseBase
- (instancetype)initWithStatus:(BaseResourceStatus *)status data:(T _Nullable)data message:(NSString * _Nullable)message error:(BaseKotlinThrowable * _Nullable)error requestTime:(int64_t)requestTime responseTime:(int64_t)responseTime __attribute__((swift_name("init(status:data:message:error:requestTime:responseTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseResourceCompanion *companion __attribute__((swift_name("companion")));
- (BaseResource<T> *)doCopyStatus:(BaseResourceStatus *)status data:(T _Nullable)data message:(NSString * _Nullable)message error:(BaseKotlinThrowable * _Nullable)error requestTime:(int64_t)requestTime responseTime:(int64_t)responseTime __attribute__((swift_name("doCopy(status:data:message:error:requestTime:responseTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isSuccess __attribute__((swift_name("isSuccess()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) BaseKotlinThrowable * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) int64_t requestTime __attribute__((swift_name("requestTime")));
@property (readonly) int64_t responseTime __attribute__((swift_name("responseTime")));
@property (readonly) BaseResourceStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceCompanion")))
@interface BaseResourceCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseResourceCompanion *shared __attribute__((swift_name("shared")));
- (BaseResource<id> *)default __attribute__((swift_name("default()")));
- (BaseResource<id> *)errorFailure:(BaseKotlinThrowable *)failure __attribute__((swift_name("error(failure:)")));
- (BaseResource<id> *)loadingData:(id _Nullable)data __attribute__((swift_name("loading(data:)")));
- (BaseResource<id> *)retry __attribute__((swift_name("retry()")));
- (BaseResource<id> *)successData:(id _Nullable)data requestTime:(int64_t)requestTime responseTime:(int64_t)responseTime __attribute__((swift_name("success(data:requestTime:responseTime:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceStatus")))
@interface BaseResourceStatus : BaseKotlinEnum<BaseResourceStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BaseResourceStatus *success __attribute__((swift_name("success")));
@property (class, readonly) BaseResourceStatus *error __attribute__((swift_name("error")));
@property (class, readonly) BaseResourceStatus *loading __attribute__((swift_name("loading")));
@property (class, readonly) BaseResourceStatus *default_ __attribute__((swift_name("default_")));
+ (BaseKotlinArray<BaseResourceStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BaseResourceStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetConfigUseCase")))
@interface BaseGetConfigUseCase : BaseBase
- (instancetype)initWithNetwork:(BaseNetworkClient *)network eventManager:(BaseEventManager *)eventManager configStore:(BaseConfigStore *)configStore flagsPersistence:(BaseFlagsPersistence *)flagsPersistence geoUseCase:(BaseGetGeoLocationFromIPUseCase *)geoUseCase serverTimeSyncUseCase:(BaseServerTimeSyncUseCase *)serverTimeSyncUseCase __attribute__((swift_name("init(network:eventManager:configStore:flagsPersistence:geoUseCase:serverTimeSyncUseCase:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeConfigId:(NSString *)configId url:(NSString *)url completionHandler:(void (^)(BaseResource<BaseConfig_ *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(configId:url:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config_")))
@interface BaseConfig_ : BaseBase
- (instancetype)initWithDataPoints:(BaseConfig_DataPoints * _Nullable)dataPoints customerCode:(NSString * _Nullable)customerCode connectorList:(NSString * _Nullable)connectorList configurationId:(NSString * _Nullable)configurationId endpoints:(BaseConfig_Endpoints * _Nullable)endpoints contentMilestones:(NSArray<BaseInt *> * _Nullable)contentMilestones adMilestones:(NSArray<BaseInt *> * _Nullable)adMilestones contentQv:(NSArray<BaseInt *> * _Nullable)contentQv adQv:(NSArray<BaseInt *> * _Nullable)adQv heartbeatIntervalMs:(int64_t)heartbeatIntervalMs __attribute__((swift_name("init(dataPoints:customerCode:connectorList:configurationId:endpoints:contentMilestones:adMilestones:contentQv:adQv:heartbeatIntervalMs:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseConfig_Companion *companion __attribute__((swift_name("companion")));
- (BaseConfig_ *)doCopyDataPoints:(BaseConfig_DataPoints * _Nullable)dataPoints customerCode:(NSString * _Nullable)customerCode connectorList:(NSString * _Nullable)connectorList configurationId:(NSString * _Nullable)configurationId endpoints:(BaseConfig_Endpoints * _Nullable)endpoints contentMilestones:(NSArray<BaseInt *> * _Nullable)contentMilestones adMilestones:(NSArray<BaseInt *> * _Nullable)adMilestones contentQv:(NSArray<BaseInt *> * _Nullable)contentQv adQv:(NSArray<BaseInt *> * _Nullable)adQv heartbeatIntervalMs:(int64_t)heartbeatIntervalMs __attribute__((swift_name("doCopy(dataPoints:customerCode:connectorList:configurationId:endpoints:contentMilestones:adMilestones:contentQv:adQv:heartbeatIntervalMs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ad_milestone_percent")
*/
@property NSArray<BaseInt *> * _Nullable adMilestones __attribute__((swift_name("adMilestones")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ad_qv_sec")
*/
@property NSArray<BaseInt *> * _Nullable adQv __attribute__((swift_name("adQv")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="configuration_id")
*/
@property NSString * _Nullable configurationId __attribute__((swift_name("configurationId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="connector_list")
*/
@property NSString * _Nullable connectorList __attribute__((swift_name("connectorList")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content_milestone_percent")
*/
@property NSArray<BaseInt *> * _Nullable contentMilestones __attribute__((swift_name("contentMilestones")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content_qv_sec")
*/
@property NSArray<BaseInt *> * _Nullable contentQv __attribute__((swift_name("contentQv")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="customer_code")
*/
@property NSString * _Nullable customerCode __attribute__((swift_name("customerCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="datapoints")
*/
@property BaseConfig_DataPoints * _Nullable dataPoints __attribute__((swift_name("dataPoints")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="endpoints")
*/
@property BaseConfig_Endpoints * _Nullable endpoints __attribute__((swift_name("endpoints")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="heartbeat_interval_ms")
*/
@property int64_t heartbeatIntervalMs __attribute__((swift_name("heartbeatIntervalMs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config_.Companion")))
@interface BaseConfig_Companion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseConfig_Companion *shared __attribute__((swift_name("shared")));
- (id<BaseKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config_.DataPoints")))
@interface BaseConfig_DataPoints : BaseBase
- (instancetype)initWithEvents:(NSArray<BaseConfig_DataPointsEvent *> * _Nullable)events metadata:(NSSet<NSString *> * _Nullable)metadata fluxData:(NSSet<NSString *> * _Nullable)fluxData __attribute__((swift_name("init(events:metadata:fluxData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseConfig_DataPointsCompanion *companion __attribute__((swift_name("companion")));
- (BaseConfig_DataPoints *)doCopyEvents:(NSArray<BaseConfig_DataPointsEvent *> * _Nullable)events metadata:(NSSet<NSString *> * _Nullable)metadata fluxData:(NSSet<NSString *> * _Nullable)fluxData __attribute__((swift_name("doCopy(events:metadata:fluxData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="events")
*/
@property NSArray<BaseConfig_DataPointsEvent *> * _Nullable events __attribute__((swift_name("events")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="flux_data")
*/
@property NSSet<NSString *> * _Nullable fluxData __attribute__((swift_name("fluxData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="metadata")
*/
@property NSSet<NSString *> * _Nullable metadata __attribute__((swift_name("metadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config_.DataPointsCompanion")))
@interface BaseConfig_DataPointsCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseConfig_DataPointsCompanion *shared __attribute__((swift_name("shared")));
- (id<BaseKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config_.DataPointsEvent")))
@interface BaseConfig_DataPointsEvent : BaseBase
- (instancetype)initWithName:(NSString * _Nullable)name types:(NSArray<NSString *> * _Nullable)types __attribute__((swift_name("init(name:types:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseConfig_DataPointsEventCompanion *companion __attribute__((swift_name("companion")));
- (BaseConfig_DataPointsEvent *)doCopyName:(NSString * _Nullable)name types:(NSArray<NSString *> * _Nullable)types __attribute__((swift_name("doCopy(name:types:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_types")
*/
@property NSArray<NSString *> * _Nullable types __attribute__((swift_name("types")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config_.DataPointsEventCompanion")))
@interface BaseConfig_DataPointsEventCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseConfig_DataPointsEventCompanion *shared __attribute__((swift_name("shared")));
- (id<BaseKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config_.Endpoints")))
@interface BaseConfig_Endpoints : BaseBase
- (instancetype)initWithEventUrl:(NSString * _Nullable)eventUrl serverTs:(NSString * _Nullable)serverTs sampling:(NSString * _Nullable)sampling ipApi:(NSString * _Nullable)ipApi __attribute__((swift_name("init(eventUrl:serverTs:sampling:ipApi:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseConfig_EndpointsCompanion *companion __attribute__((swift_name("companion")));
- (BaseConfig_Endpoints *)doCopyEventUrl:(NSString * _Nullable)eventUrl serverTs:(NSString * _Nullable)serverTs sampling:(NSString * _Nullable)sampling ipApi:(NSString * _Nullable)ipApi __attribute__((swift_name("doCopy(eventUrl:serverTs:sampling:ipApi:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_ingest")
*/
@property (readonly) NSString * _Nullable eventUrl __attribute__((swift_name("eventUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ip_api")
*/
@property (readonly) NSString * _Nullable ipApi __attribute__((swift_name("ipApi")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sampling")
*/
@property (readonly) NSString * _Nullable sampling __attribute__((swift_name("sampling")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="server_ts")
*/
@property (readonly) NSString * _Nullable serverTs __attribute__((swift_name("serverTs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config_.EndpointsCompanion")))
@interface BaseConfig_EndpointsCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseConfig_EndpointsCompanion *shared __attribute__((swift_name("shared")));
- (id<BaseKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendEventUseCase")))
@interface BaseSendEventUseCase : BaseBase
- (instancetype)initWithNetwork:(BaseNetworkClient *)network __attribute__((swift_name("init(network:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeList:(NSArray<BaseMessage *> *)list completionHandler:(void (^)(BaseResource<BaseEventResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(list:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventResponse")))
@interface BaseEventResponse : BaseBase
- (instancetype)initWithHasErrors:(NSString * _Nullable)hasErrors itemCount:(NSString * _Nullable)itemCount statusCode:(NSString * _Nullable)statusCode items:(NSArray<BaseEventResponseEventReply *> * _Nullable)items status:(NSString * _Nullable)status __attribute__((swift_name("init(hasErrors:itemCount:statusCode:items:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseEventResponseCompanion *companion __attribute__((swift_name("companion")));
- (BaseEventResponse *)doCopyHasErrors:(NSString * _Nullable)hasErrors itemCount:(NSString * _Nullable)itemCount statusCode:(NSString * _Nullable)statusCode items:(NSArray<BaseEventResponseEventReply *> * _Nullable)items status:(NSString * _Nullable)status __attribute__((swift_name("doCopy(hasErrors:itemCount:statusCode:items:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="has_errors")
*/
@property NSString * _Nullable hasErrors __attribute__((swift_name("hasErrors")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="item_count")
*/
@property NSString * _Nullable itemCount __attribute__((swift_name("itemCount")));
@property NSArray<BaseEventResponseEventReply *> * _Nullable items __attribute__((swift_name("items")));
@property NSString * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_code")
*/
@property NSString * _Nullable statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventResponse.Companion")))
@interface BaseEventResponseCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseEventResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<BaseKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventResponse.EventReply")))
@interface BaseEventResponseEventReply : BaseBase
- (instancetype)initWithEventId:(NSString * _Nullable)eventId statusCode:(NSString * _Nullable)statusCode error:(NSString * _Nullable)error status:(NSString * _Nullable)status __attribute__((swift_name("init(eventId:statusCode:error:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseEventResponseEventReplyCompanion *companion __attribute__((swift_name("companion")));
- (BaseEventResponseEventReply *)doCopyEventId:(NSString * _Nullable)eventId statusCode:(NSString * _Nullable)statusCode error:(NSString * _Nullable)error status:(NSString * _Nullable)status __attribute__((swift_name("doCopy(eventId:statusCode:error:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_id")
*/
@property NSString * _Nullable eventId __attribute__((swift_name("eventId")));
@property NSString * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_code")
*/
@property NSString * _Nullable statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventResponse.EventReplyCompanion")))
@interface BaseEventResponseEventReplyCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseEventResponseEventReplyCompanion *shared __attribute__((swift_name("shared")));
- (id<BaseKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message")))
@interface BaseMessage : BaseBase
- (instancetype)initWithCustomerCode:(NSString * _Nullable)customerCode configurationId:(NSString *)configurationId eventId:(NSString * _Nullable)eventId connectorList:(NSString * _Nullable)connectorList event:(BaseMessageEvent *)event userDetails:(BaseMutableDictionary<NSString *, id> * _Nullable)userDetails device:(BaseMutableDictionary<NSString *, id> * _Nullable)device geoLocation:(BaseMutableDictionary<NSString *, id> *)geoLocation network:(BaseMutableDictionary<NSString *, id> *)network video:(BaseMutableDictionary<NSString *, id> *)video ad:(BaseMutableDictionary<NSString *, id> *)ad page:(BaseMutableDictionary<NSString *, id> *)page opsMetadata:(BaseMutableDictionary<NSString *, id> *)opsMetadata cdn:(BaseMutableDictionary<NSString *, id> *)cdn player:(BaseMutableDictionary<NSString *, id> *)player custom:(BaseMutableDictionary<NSString *, id> *)custom cmcd:(BaseMutableDictionary<NSString *, id> *)cmcd __attribute__((swift_name("init(customerCode:configurationId:eventId:connectorList:event:userDetails:device:geoLocation:network:video:ad:page:opsMetadata:cdn:player:custom:cmcd:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseMessageCompanion *companion __attribute__((swift_name("companion")));
- (BaseMessage *)doCopyCustomerCode:(NSString * _Nullable)customerCode configurationId:(NSString *)configurationId eventId:(NSString * _Nullable)eventId connectorList:(NSString * _Nullable)connectorList event:(BaseMessageEvent *)event userDetails:(BaseMutableDictionary<NSString *, id> * _Nullable)userDetails device:(BaseMutableDictionary<NSString *, id> * _Nullable)device geoLocation:(BaseMutableDictionary<NSString *, id> *)geoLocation network:(BaseMutableDictionary<NSString *, id> *)network video:(BaseMutableDictionary<NSString *, id> *)video ad:(BaseMutableDictionary<NSString *, id> *)ad page:(BaseMutableDictionary<NSString *, id> *)page opsMetadata:(BaseMutableDictionary<NSString *, id> *)opsMetadata cdn:(BaseMutableDictionary<NSString *, id> *)cdn player:(BaseMutableDictionary<NSString *, id> *)player custom:(BaseMutableDictionary<NSString *, id> *)custom cmcd:(BaseMutableDictionary<NSString *, id> *)cmcd __attribute__((swift_name("doCopy(customerCode:configurationId:eventId:connectorList:event:userDetails:device:geoLocation:network:video:ad:page:opsMetadata:cdn:player:custom:cmcd:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device")
*/
@property (readonly) BaseMutableDictionary<NSString *, id> * _Nullable device __attribute__((swift_name("device")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event")
*/
@property (readonly) BaseMessageEvent *event __attribute__((swift_name("event")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_id")
*/
@property (readonly) NSString * _Nullable eventId __attribute__((swift_name("eventId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_details")
*/
@property (readonly) BaseMutableDictionary<NSString *, id> * _Nullable userDetails __attribute__((swift_name("userDetails")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.Companion")))
@interface BaseMessageCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<BaseKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.Event")))
@interface BaseMessageEvent : BaseBase
- (instancetype)initWithType:(NSString *)type timestamp:(int64_t)timestamp fluxData:(BaseMutableDictionary<NSString *, id> *)fluxData metaData:(BaseMutableDictionary<NSString *, id> *)metaData __attribute__((swift_name("init(type:timestamp:fluxData:metaData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseMessageEventCompanion *companion __attribute__((swift_name("companion")));
- (BaseMessageEvent *)doCopyType:(NSString *)type timestamp:(int64_t)timestamp fluxData:(BaseMutableDictionary<NSString *, id> *)fluxData metaData:(BaseMutableDictionary<NSString *, id> *)metaData __attribute__((swift_name("doCopy(type:timestamp:fluxData:metaData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="metrics")
*/
@property (readonly) BaseMutableDictionary<NSString *, id> *fluxData __attribute__((swift_name("fluxData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="attributes")
*/
@property (readonly) BaseMutableDictionary<NSString *, id> *metaData __attribute__((swift_name("metaData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="timestamp")
*/
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Message.EventCompanion")))
@interface BaseMessageEventCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseMessageEventCompanion *shared __attribute__((swift_name("shared")));
- (id<BaseKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetGeoLocationFromIPUseCase")))
@interface BaseGetGeoLocationFromIPUseCase : BaseBase
- (instancetype)initWithNetwork:(BaseNetworkClient *)network metaDataStore:(BaseMetaDataStore *)metaDataStore flagsPersistence:(BaseFlagsPersistence *)flagsPersistence __attribute__((swift_name("init(network:metaDataStore:flagsPersistence:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeUrl:(NSString *)url completionHandler:(void (^)(BaseResource<BaseGeoResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(url:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoResponse")))
@interface BaseGeoResponse : BaseBase
- (instancetype)initWithAsn:(NSString * _Nullable)asn asname:(NSString * _Nullable)asname city:(NSString * _Nullable)city continent:(NSString * _Nullable)continent continentCode:(NSString * _Nullable)continentCode country:(NSString * _Nullable)country countryCode:(NSString * _Nullable)countryCode district:(NSString * _Nullable)district isp:(NSString * _Nullable)isp mobile:(BaseBoolean * _Nullable)mobile lat:(BaseDouble * _Nullable)lat lon:(BaseDouble * _Nullable)lon offset:(BaseInt * _Nullable)offset org:(NSString * _Nullable)org query:(NSString * _Nullable)query region:(NSString * _Nullable)region regionName:(NSString * _Nullable)regionName status:(NSString * _Nullable)status timezone:(NSString * _Nullable)timezone zip:(NSString * _Nullable)zip __attribute__((swift_name("init(asn:asname:city:continent:continentCode:country:countryCode:district:isp:mobile:lat:lon:offset:org:query:region:regionName:status:timezone:zip:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseGeoResponseCompanion *companion __attribute__((swift_name("companion")));
- (BaseGeoResponse *)doCopyAsn:(NSString * _Nullable)asn asname:(NSString * _Nullable)asname city:(NSString * _Nullable)city continent:(NSString * _Nullable)continent continentCode:(NSString * _Nullable)continentCode country:(NSString * _Nullable)country countryCode:(NSString * _Nullable)countryCode district:(NSString * _Nullable)district isp:(NSString * _Nullable)isp mobile:(BaseBoolean * _Nullable)mobile lat:(BaseDouble * _Nullable)lat lon:(BaseDouble * _Nullable)lon offset:(BaseInt * _Nullable)offset org:(NSString * _Nullable)org query:(NSString * _Nullable)query region:(NSString * _Nullable)region regionName:(NSString * _Nullable)regionName status:(NSString * _Nullable)status timezone:(NSString * _Nullable)timezone zip:(NSString * _Nullable)zip __attribute__((swift_name("doCopy(asn:asname:city:continent:continentCode:country:countryCode:district:isp:mobile:lat:lon:offset:org:query:region:regionName:status:timezone:zip:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="as")
*/
@property NSString * _Nullable asn __attribute__((swift_name("asn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="asname")
*/
@property NSString * _Nullable asname __attribute__((swift_name("asname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="city")
*/
@property NSString * _Nullable city __attribute__((swift_name("city")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="continent")
*/
@property NSString * _Nullable continent __attribute__((swift_name("continent")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="continentCode")
*/
@property NSString * _Nullable continentCode __attribute__((swift_name("continentCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="country")
*/
@property NSString * _Nullable country __attribute__((swift_name("country")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="countryCode")
*/
@property NSString * _Nullable countryCode __attribute__((swift_name("countryCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="district")
*/
@property NSString * _Nullable district __attribute__((swift_name("district")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="isp")
*/
@property NSString * _Nullable isp __attribute__((swift_name("isp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lat")
*/
@property BaseDouble * _Nullable lat __attribute__((swift_name("lat")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lon")
*/
@property BaseDouble * _Nullable lon __attribute__((swift_name("lon")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mobile")
*/
@property BaseBoolean * _Nullable mobile __attribute__((swift_name("mobile")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="offset")
*/
@property BaseInt * _Nullable offset __attribute__((swift_name("offset")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="org")
*/
@property NSString * _Nullable org __attribute__((swift_name("org")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="query")
*/
@property NSString * _Nullable query __attribute__((swift_name("query")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="region")
*/
@property NSString * _Nullable region __attribute__((swift_name("region")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="regionName")
*/
@property NSString * _Nullable regionName __attribute__((swift_name("regionName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property NSString * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="timezone")
*/
@property NSString * _Nullable timezone __attribute__((swift_name("timezone")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="zip")
*/
@property NSString * _Nullable zip __attribute__((swift_name("zip")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoResponse.Companion")))
@interface BaseGeoResponseCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseGeoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<BaseKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerTimeSyncUseCase")))
@interface BaseServerTimeSyncUseCase : BaseBase
- (instancetype)initWithNetwork:(BaseNetworkClient *)network flagsPersistence:(BaseFlagsPersistence *)flagsPersistence __attribute__((swift_name("init(network:flagsPersistence:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeUrl:(NSString *)url completionHandler:(void (^)(BaseResource<BaseTimeSyncResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(url:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeSyncResponse")))
@interface BaseTimeSyncResponse : BaseBase
- (instancetype)initWithServerTime:(int64_t)serverTime __attribute__((swift_name("init(serverTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseTimeSyncResponseCompanion *companion __attribute__((swift_name("companion")));
- (BaseTimeSyncResponse *)doCopyServerTime:(int64_t)serverTime __attribute__((swift_name("doCopy(serverTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="epoch_millis")
*/
@property (readonly) int64_t serverTime __attribute__((swift_name("serverTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeSyncResponse.Companion")))
@interface BaseTimeSyncResponseCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseTimeSyncResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<BaseKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("DzPlayer")))
@protocol BaseDzPlayer
@required
- (void)addListenerListener:(id<BaseDzPlayerListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (void)onClear __attribute__((swift_name("onClear()")));
- (void)remove __attribute__((swift_name("remove()")));
@property (readonly) int32_t audioBitrate __attribute__((swift_name("audioBitrate")));
@property (readonly) int32_t bitrate __attribute__((swift_name("bitrate")));
@property (readonly) int64_t bufferDuration __attribute__((swift_name("bufferDuration")));
@property (readonly) int64_t contentDuration __attribute__((swift_name("contentDuration")));
@property (readonly) BaseMedia * _Nullable currentMediaItem __attribute__((swift_name("currentMediaItem")));
@property (readonly) int64_t currentPosition __attribute__((swift_name("currentPosition")));
@property (readonly) BOOL defaultMuted __attribute__((swift_name("defaultMuted")));
@property (readonly) int64_t duration __attribute__((swift_name("duration")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) BaseBoolean * _Nullable isContent __attribute__((swift_name("isContent")));
@property (readonly) BaseBoolean * _Nullable isLive __attribute__((swift_name("isLive")));
@property (readonly) BOOL isMuted __attribute__((swift_name("isMuted")));
@property (readonly) BOOL isPlaying __attribute__((swift_name("isPlaying")));
@property (readonly) BOOL isPlayingAd __attribute__((swift_name("isPlayingAd")));
@property (readonly) BOOL isPlayingContent __attribute__((swift_name("isPlayingContent")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) BOOL playWhenReady __attribute__((swift_name("playWhenReady")));
@property (readonly) float speed __attribute__((swift_name("speed")));
@property (readonly) int32_t trackIndex __attribute__((swift_name("trackIndex")));
@property (readonly) int32_t versionCode __attribute__((swift_name("versionCode")));
@property (readonly) NSString *versionName __attribute__((swift_name("versionName")));
@property (readonly) int32_t volume __attribute__((swift_name("volume")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("DzPlayerListener")))
@protocol BaseDzPlayerListener
@required
- (int32_t)getTrackIndex __attribute__((swift_name("getTrackIndex()")));
- (void)onIsLoadingChangedIsLoading:(BOOL)isLoading __attribute__((swift_name("onIsLoadingChanged(isLoading:)")));
- (void)onMediaRequested __attribute__((swift_name("onMediaRequested()")));
- (void)onPlayWhenReadyChangedPlayWhenReady:(BOOL)playWhenReady reason:(int32_t)reason __attribute__((swift_name("onPlayWhenReadyChanged(playWhenReady:reason:)")));
- (void)onPlaybackErrorErrorCode:(int32_t)errorCode errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("onPlaybackError(errorCode:errorMessage:)")));
- (void)onPlaybackParametersChangedSpeed:(float)speed __attribute__((swift_name("onPlaybackParametersChanged(speed:)")));
- (void)onPlaybackStateChangeState:(BaseDzPlayerState *)state __attribute__((swift_name("onPlaybackStateChange(state:)")));
- (void)onRepeatModeChangedIsLoop:(BOOL)isLoop __attribute__((swift_name("onRepeatModeChanged(isLoop:)")));
- (void)onSeekOldPosition:(int64_t)oldPosition newPosition:(int64_t)newPosition __attribute__((swift_name("onSeek(oldPosition:newPosition:)")));
- (void)onTracksChangedTracks:(NSArray<BaseTrackInfo *> *)tracks __attribute__((swift_name("onTracksChanged(tracks:)")));
- (void)onVolumeChangeVolume:(int32_t)volume muted:(BOOL)muted __attribute__((swift_name("onVolumeChange(volume:muted:)")));
- (void)videoSizeChangedHeight:(int32_t)height width:(int32_t)width __attribute__((swift_name("videoSizeChanged(height:width:)")));
@end

__attribute__((swift_name("DzPlayerState")))
@interface BaseDzPlayerState : BaseBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DzPlayerState.Buffering")))
@interface BaseDzPlayerStateBuffering : BaseDzPlayerState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)buffering __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseDzPlayerStateBuffering *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DzPlayerState.Ended")))
@interface BaseDzPlayerStateEnded : BaseDzPlayerState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ended __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseDzPlayerStateEnded *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DzPlayerState.Idle")))
@interface BaseDzPlayerStateIdle : BaseDzPlayerState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseDzPlayerStateIdle *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DzPlayerState.Ready")))
@interface BaseDzPlayerStateReady : BaseDzPlayerState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ready __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseDzPlayerStateReady *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerAdapter")))
@interface BasePlayerAdapter : BaseDzAdapter
- (instancetype)initWithPlayer:(id<BaseDzPlayer>)player baseContext:(id<BaseBaseContext>)baseContext __attribute__((swift_name("init(player:baseContext:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseContext:(id<BaseBaseContext>)baseContext __attribute__((swift_name("init(baseContext:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int64_t adDuration __attribute__((swift_name("adDuration")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t audioBitrate __attribute__((swift_name("audioBitrate")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t bitrate __attribute__((swift_name("bitrate")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int64_t bufferDuration __attribute__((swift_name("bufferDuration")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int64_t contentDuration __attribute__((swift_name("contentDuration")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BaseMedia * _Nullable currentMedia __attribute__((swift_name("currentMedia")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL defaultMuted __attribute__((swift_name("defaultMuted")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int64_t duration __attribute__((swift_name("duration")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t height __attribute__((swift_name("height")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BaseBoolean * _Nullable isContent __attribute__((swift_name("isContent")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL isFullScreen __attribute__((swift_name("isFullScreen")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BaseBoolean * _Nullable isLive __attribute__((swift_name("isLive")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL isMuted __attribute__((swift_name("isMuted")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL isPause __attribute__((swift_name("isPause")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL isPlaying __attribute__((swift_name("isPlaying")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL isPlayingAd __attribute__((swift_name("isPlayingAd")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL isPlayingContent __attribute__((swift_name("isPlayingContent")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int64_t playHeadDuration __attribute__((swift_name("playHeadDuration")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL playWhenReady __attribute__((swift_name("playWhenReady")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *playerName __attribute__((swift_name("playerName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) float speed __attribute__((swift_name("speed")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t versionCode __attribute__((swift_name("versionCode")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *versionName __attribute__((swift_name("versionName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t volume __attribute__((swift_name("volume")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackInfo")))
@interface BaseTrackInfo : BaseBase
- (instancetype)initWithBitrate:(int32_t)bitrate height:(int32_t)height width:(int32_t)width __attribute__((swift_name("init(bitrate:height:width:)"))) __attribute__((objc_designated_initializer));
- (BaseTrackInfo *)doCopyBitrate:(int32_t)bitrate height:(int32_t)height width:(int32_t)width __attribute__((swift_name("doCopy(bitrate:height:width:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t bitrate __attribute__((swift_name("bitrate")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface BaseKotlinThrowable : BaseBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BaseKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BaseKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (BaseKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BaseKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoMappingException")))
@interface BaseNoMappingException : BaseKotlinThrowable
- (instancetype)initWithOldState:(BaseState *)oldState newState:(BaseState *)newState __attribute__((swift_name("init(oldState:newState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(BaseKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BaseKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BaseNoMappingException *)doCopyOldState:(BaseState *)oldState newState:(BaseState *)newState __attribute__((swift_name("doCopy(oldState:newState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=doNewState) BaseState *newState __attribute__((swift_name("newState")));
@property (readonly) BaseState *oldState __attribute__((swift_name("oldState")));
@end

__attribute__((swift_name("State")))
@interface BaseState : BaseBase
@property (class, readonly, getter=companion) BaseStateCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isAd __attribute__((swift_name("isAd()")));
- (BOOL)isBuffering __attribute__((swift_name("isBuffering()")));
- (BOOL)isCompleted __attribute__((swift_name("isCompleted()")));
- (BOOL)isError __attribute__((swift_name("isError()")));
- (BOOL)isIdle __attribute__((swift_name("isIdle()")));
- (BOOL)isPaused __attribute__((swift_name("isPaused()")));
- (BOOL)isPlaying_ __attribute__((swift_name("isPlaying()")));
- (BOOL)isSeeking __attribute__((swift_name("isSeeking()")));
- (BOOL)isStopped __attribute__((swift_name("isStopped()")));
- (NSString *)log __attribute__((swift_name("log()")));
@end

__attribute__((swift_name("State.Ad")))
@interface BaseStateAd : BaseState
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.AdBUFFERING")))
@interface BaseStateAdBUFFERING : BaseStateAd
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bUFFERING __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateAdBUFFERING *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("State.AdBreak")))
@interface BaseStateAdBreak : BaseStateAd
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.AdBreakENDED")))
@interface BaseStateAdBreakENDED : BaseStateAdBreak
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eNDED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateAdBreakENDED *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.AdBreakSTARTED")))
@interface BaseStateAdBreakSTARTED : BaseStateAdBreak
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sTARTED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateAdBreakSTARTED *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.AdCOMPLETED")))
@interface BaseStateAdCOMPLETED : BaseStateAd
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cOMPLETED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateAdCOMPLETED *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.AdERROR")))
@interface BaseStateAdERROR : BaseStateAd
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eRROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateAdERROR *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.AdIDLE")))
@interface BaseStateAdIDLE : BaseStateAd
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iDLE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateAdIDLE *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.AdPAUSED")))
@interface BaseStateAdPAUSED : BaseStateAd
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pAUSED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateAdPAUSED *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.AdPLAYING")))
@interface BaseStateAdPLAYING : BaseStateAd
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pLAYING __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateAdPLAYING *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.AdSEEKING")))
@interface BaseStateAdSEEKING : BaseStateAd
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sEEKING __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateAdSEEKING *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.AdSKIPPED")))
@interface BaseStateAdSKIPPED : BaseStateAd
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sKIPPED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateAdSKIPPED *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.AdSTOPPED")))
@interface BaseStateAdSTOPPED : BaseStateAd
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sTOPPED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateAdSTOPPED *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.Companion")))
@interface BaseStateCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateCompanion *shared __attribute__((swift_name("shared")));
- (BaseState *)errorIsContent:(BOOL)isContent __attribute__((swift_name("error(isContent:)")));
@end

__attribute__((swift_name("State.Content")))
@interface BaseStateContent : BaseState
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.ContentBUFFERING")))
@interface BaseStateContentBUFFERING : BaseStateContent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bUFFERING __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateContentBUFFERING *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.ContentCOMPLETED")))
@interface BaseStateContentCOMPLETED : BaseStateContent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cOMPLETED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateContentCOMPLETED *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.ContentERROR")))
@interface BaseStateContentERROR : BaseStateContent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eRROR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateContentERROR *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.ContentIDLE")))
@interface BaseStateContentIDLE : BaseStateContent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iDLE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateContentIDLE *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.ContentPAUSED")))
@interface BaseStateContentPAUSED : BaseStateContent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pAUSED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateContentPAUSED *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.ContentPLAYING")))
@interface BaseStateContentPLAYING : BaseStateContent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pLAYING __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateContentPLAYING *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.ContentREQUESTED")))
@interface BaseStateContentREQUESTED : BaseStateContent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)rEQUESTED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateContentREQUESTED *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.ContentSEEKING")))
@interface BaseStateContentSEEKING : BaseStateContent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sEEKING __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateContentSEEKING *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.ContentSTARTED")))
@interface BaseStateContentSTARTED : BaseStateContent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sTARTED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateContentSTARTED *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.ContentSTOPPED")))
@interface BaseStateContentSTOPPED : BaseStateContent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sTOPPED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseStateContentSTOPPED *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("StateMachine")))
@protocol BaseStateMachine
@required
- (void)clearHistory __attribute__((swift_name("clearHistory()")));
- (void)defineStateMapping:(BaseStateMapping *)mapping __attribute__((swift_name("defineState(mapping:)")));
- (void)finish __attribute__((swift_name("finish()")));
- (void)setInitialStateState:(BaseState *)state __attribute__((swift_name("setInitialState(state:)")));
- (void)setStateNewState:(BaseState *)newState payload:(BaseMutableDictionary<NSString *, id> *)payload timestamp:(int64_t)timestamp __attribute__((swift_name("setState(newState:payload:timestamp:)")));
- (NSArray<BaseTransition *> *)stateHistoryState:(BaseState *)state __attribute__((swift_name("stateHistory(state:)")));
- (int64_t)stateTimeState:(BaseState *)state includeCurrentState:(BOOL)includeCurrentState __attribute__((swift_name("stateTime(state:includeCurrentState:)")));
@property (readonly) BaseState *currentState __attribute__((swift_name("currentState")));
@property (readonly) id<BaseKotlinx_coroutines_coreSharedFlow> errors __attribute__((swift_name("errors")));
@property (readonly) id<BaseKotlinx_coroutines_coreSharedFlow> transitions __attribute__((swift_name("transitions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateMachineImp")))
@interface BaseStateMachineImp : BaseBase <BaseStateMachine>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clearHistory __attribute__((swift_name("clearHistory()")));
- (void)defineStateMapping:(BaseStateMapping *)mapping __attribute__((swift_name("defineState(mapping:)")));
- (void)finish __attribute__((swift_name("finish()")));
- (void)setInitialStateState:(BaseState *)state __attribute__((swift_name("setInitialState(state:)")));
- (void)setStateNewState:(BaseState *)newState payload:(BaseMutableDictionary<NSString *, id> *)payload timestamp:(int64_t)timestamp __attribute__((swift_name("setState(newState:payload:timestamp:)")));
- (NSArray<BaseTransition *> *)stateHistoryState:(BaseState *)state __attribute__((swift_name("stateHistory(state:)")));
- (int64_t)stateTimeState:(BaseState *)state includeCurrentState:(BOOL)includeCurrentState __attribute__((swift_name("stateTime(state:includeCurrentState:)")));
@property (readonly) BaseState *currentState __attribute__((swift_name("currentState")));
@property (readonly) id<BaseKotlinx_coroutines_coreSharedFlow> errors __attribute__((swift_name("errors")));
@property (readonly) id<BaseKotlinx_coroutines_coreSharedFlow> transitions __attribute__((swift_name("transitions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateMapping")))
@interface BaseStateMapping : BaseBase
- (instancetype)initWithState:(BaseState *)state transactions:(NSSet<BaseState *> *)transactions onExit:(void (^)(BaseTransition *))onExit onEntry:(void (^)(BaseTransition *))onEntry __attribute__((swift_name("init(state:transactions:onExit:onEntry:)"))) __attribute__((objc_designated_initializer));
- (BaseStateMapping *)doCopyState:(BaseState *)state transactions:(NSSet<BaseState *> *)transactions onExit:(void (^)(BaseTransition *))onExit onEntry:(void (^)(BaseTransition *))onEntry __attribute__((swift_name("doCopy(state:transactions:onExit:onEntry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^onEntry)(BaseTransition *) __attribute__((swift_name("onEntry")));
@property (readonly) void (^onExit)(BaseTransition *) __attribute__((swift_name("onExit")));
@property (readonly) BaseState *state __attribute__((swift_name("state")));
@property (readonly) NSSet<BaseState *> *transactions __attribute__((swift_name("transactions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transition")))
@interface BaseTransition : BaseBase
- (instancetype)initWithOldState:(BaseState *)oldState newState:(BaseState *)newState payload:(BaseMutableDictionary<NSString *, id> *)payload timestamp:(int64_t)timestamp __attribute__((swift_name("init(oldState:newState:payload:timestamp:)"))) __attribute__((objc_designated_initializer));
- (BaseTransition *)doCopyOldState:(BaseState *)oldState newState:(BaseState *)newState payload:(BaseMutableDictionary<NSString *, id> *)payload timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(oldState:newState:payload:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=doNewState) BaseState *newState __attribute__((swift_name("newState")));
@property (readonly) BaseState *oldState __attribute__((swift_name("oldState")));
@property (readonly) BaseMutableDictionary<NSString *, id> *payload __attribute__((swift_name("payload")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Time")))
@interface BaseTime : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)time __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseTime *shared __attribute__((swift_name("shared")));
- (int64_t)now __attribute__((swift_name("now()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol BaseKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<BaseKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<BaseKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol BaseKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<BaseKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<BaseKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol BaseKotlinx_serialization_coreKSerializer <BaseKotlinx_serialization_coreSerializationStrategy, BaseKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnySerializer")))
@interface BaseAnySerializer : BaseBase <BaseKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)anySerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseAnySerializer *shared __attribute__((swift_name("shared")));
- (id)deserializeDecoder:(id<BaseKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<BaseKotlinx_serialization_coreEncoder>)encoder value:(id)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<BaseKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DurationsManager")))
@interface BaseDurationsManager : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)durationsManager __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseDurationsManager *shared __attribute__((swift_name("shared")));
@property BaseLong * _Nullable engagementDuration __attribute__((swift_name("engagementDuration")));
@end

__attribute__((swift_name("VolumeListener")))
@protocol BaseVolumeListener
@required
- (void)onVolumeChangedVolume:(int32_t)volume __attribute__((swift_name("onVolumeChanged(volume:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config")))
@interface BaseConfig : BaseBase
@property (class, readonly, getter=companion) BaseConfigCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *apiUrl __attribute__((swift_name("apiUrl")));
@property (readonly) NSString *configurationId __attribute__((swift_name("configurationId")));
@property (readonly) BOOL isProduction __attribute__((swift_name("isProduction")));
@property (readonly) BaseLogLevel *logLevel __attribute__((swift_name("logLevel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config.Builder")))
@interface BaseConfigBuilder : BaseBase
- (instancetype)initWithConfigurationId:(NSString *)configurationId __attribute__((swift_name("init(configurationId:)"))) __attribute__((objc_designated_initializer));
- (BaseConfigBuilder *)apiUrlApiUrl:(NSString *)apiUrl __attribute__((swift_name("apiUrl(apiUrl:)")));
- (BaseConfig *)build __attribute__((swift_name("build()")));
- (BaseConfigBuilder *)isProductionIsProduction:(BOOL)isProduction __attribute__((swift_name("isProduction(isProduction:)")));
- (BaseConfigBuilder *)logLevelLogLevel:(BaseLogLevel *)logLevel __attribute__((swift_name("logLevel(logLevel:)")));
@property (readonly) NSString *apiUrl __attribute__((swift_name("apiUrl")));
@property (readonly) NSString *configurationId __attribute__((swift_name("configurationId")));
@property (readonly) BOOL isProduction __attribute__((swift_name("isProduction")));
@property (readonly) BaseLogLevel *logLevel __attribute__((swift_name("logLevel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Config.Companion")))
@interface BaseConfigCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseConfigCompanion *shared __attribute__((swift_name("shared")));
- (BaseConfig *)buildConfigurationId:(NSString *)configurationId block:(void (^)(BaseConfigBuilder *))block __attribute__((swift_name("build(configurationId:block:)")));
@end

__attribute__((swift_name("SdkEvent")))
@interface BaseSdkEvent<T> : BaseBase
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkEventAdapterCreated")))
@interface BaseSdkEventAdapterCreated : BaseSdkEvent<NSString *>
- (instancetype)initWithAdapterId:(NSString *)adapterId __attribute__((swift_name("init(adapterId:)"))) __attribute__((objc_designated_initializer));
- (BaseSdkEventAdapterCreated *)doCopyAdapterId:(NSString *)adapterId __attribute__((swift_name("doCopy(adapterId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *adapterId __attribute__((swift_name("adapterId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkEventSdkError")))
@interface BaseSdkEventSdkError : BaseSdkEvent<BaseKotlinThrowable *>
- (instancetype)initWithException:(BaseKotlinThrowable *)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));
- (BaseSdkEventSdkError *)doCopyException:(BaseKotlinThrowable *)exception __attribute__((swift_name("doCopy(exception:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BaseKotlinThrowable *exception __attribute__((swift_name("exception")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkEventSdkInit")))
@interface BaseSdkEventSdkInit : BaseSdkEvent<NSString *>
- (instancetype)initWithApiKey:(NSString *)apiKey __attribute__((swift_name("init(apiKey:)"))) __attribute__((objc_designated_initializer));
- (BaseSdkEventSdkInit *)doCopyApiKey:(NSString *)apiKey __attribute__((swift_name("doCopy(apiKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@end

@interface BaseDzAdapter (Extensions)
- (void)sendAdEventAdEvent:(BaseDzAdEvent *)adEvent sendEvent:(void (^)(BaseEvent *))sendEvent setState:(void (^)(BaseState *))setState __attribute__((swift_name("sendAdEvent(adEvent:sendEvent:setState:)")));
@end

@interface BaseFluxDataStore (Extensions)
- (void)increaseCounterType:(BaseFluxDataType *)type __attribute__((swift_name("increaseCounter(type:)")));
- (void)resetType:(BaseFluxDataType *)type __attribute__((swift_name("reset(type:)")));
- (void)resetDurationType:(BaseFluxDataType *)type duration:(int64_t)duration __attribute__((swift_name("resetDuration(type:duration:)")));
- (void)startCounterType:(BaseFluxDataType *)type __attribute__((swift_name("startCounter(type:)")));
- (void)sumOfType:(BaseFluxDataType *)type list:(NSArray<BaseFluxDataType *> *)list __attribute__((swift_name("sumOf(type:list:)")));
- (void)updateDurationType:(BaseFluxDataType *)type duration:(int64_t)duration __attribute__((swift_name("updateDuration(type:duration:)")));
@end

@interface BaseMetaDataStore (Extensions)
- (BaseMutableDictionary<NSString *, id> *)allAppSession:(BaseSessionManager *)appSession __attribute__((swift_name("all(appSession:)")));
- (BaseMutableDictionary<NSString *, id> *)device __attribute__((swift_name("device()")));
- (void)deviceInfo:(BaseDeviceInfo *)info __attribute__((swift_name("device(info:)")));
- (BaseMutableDictionary<NSString *, id> *)geo __attribute__((swift_name("geo()")));
- (void)geoGeo:(BaseGeoResponse *)geo __attribute__((swift_name("geo(geo:)")));
- (BaseKotlinPair<NSString *, id> * _Nullable)getEntryPairType:(BaseMetaDataType *)type __attribute__((swift_name("getEntryPair(type:)")));
- (BaseMutableDictionary<NSString *, id> *)network __attribute__((swift_name("network()")));
- (void)networkGeo:(BaseGeoResponse *)geo __attribute__((swift_name("network(geo:)")));
- (BaseMutableDictionary<NSString *, id> *)page __attribute__((swift_name("page()")));
- (BaseMutableDictionary<NSString *, id> *)userSessionManager:(BaseSessionManager *)sessionManager __attribute__((swift_name("user(sessionManager:)")));
@end

@interface BasePreferenceStore (Extensions)
@property BOOL activeSinceLastHeartbeat __attribute__((swift_name("activeSinceLastHeartbeat")));
@property int64_t adPosUpdateTime __attribute__((swift_name("adPosUpdateTime")));
@property int32_t ctPlayedCount __attribute__((swift_name("ctPlayedCount")));
@property BaseLong * _Nullable ctPlayingPos __attribute__((swift_name("ctPlayingPos")));
@property int64_t ctPosUpdateTime __attribute__((swift_name("ctPosUpdateTime")));
@property int32_t ctRequestedCount __attribute__((swift_name("ctRequestedCount")));
@property BaseState * _Nullable currState __attribute__((swift_name("currState")));
@property int32_t heartbeatCount __attribute__((swift_name("heartbeatCount")));
@property BOOL isAdPaused __attribute__((swift_name("isAdPaused")));
@property BOOL isAdStarted __attribute__((swift_name("isAdStarted")));
@property BOOL isContentPaused __attribute__((swift_name("isContentPaused")));
@property BOOL isContentStarted __attribute__((swift_name("isContentStarted")));
@property BOOL isMuted __attribute__((swift_name("isMuted")));
@property BOOL isStalling __attribute__((swift_name("isStalling")));
@property int64_t lastDurUpdateTime __attribute__((swift_name("lastDurUpdateTime")));
@property int64_t nextHeartbeatTime __attribute__((swift_name("nextHeartbeatTime")));
@property int64_t totalAdBreakTime __attribute__((swift_name("totalAdBreakTime")));
@property int64_t totalAdPlaybackTime __attribute__((swift_name("totalAdPlaybackTime")));
@end

@interface BaseEventEntry (Extensions)
- (int64_t)sinceCurrent:(int64_t)current __attribute__((swift_name("since(current:)")));
@end

@interface BaseEvent (Extensions)
- (BaseEventEntry *)toEntry __attribute__((swift_name("toEntry()")));
- (NSString *)uniqueId __attribute__((swift_name("uniqueId()")));
@end

@interface BaseEventType (Extensions)
- (BaseEvent *)toEventTime:(int64_t)time metadata:(BaseMutableDictionary<NSString *, id> *)metadata fluxData:(BaseMutableDictionary<NSString *, id> *)fluxData __attribute__((swift_name("toEvent(time:metadata:fluxData:)")));
- (NSString *)uniqueName __attribute__((swift_name("uniqueName()")));
@end

@interface BaseFluxDataType (Extensions)
- (BaseFluxData *)toThat:(id)that __attribute__((swift_name("to(that:)")));
@end

@interface BaseMetaDataType (Extensions)
- (BaseMetaData *)toThat:(id)that __attribute__((swift_name("to(that:)")));
@end

@interface BasePreferenceType (Extensions)
- (BasePreference *)toValue:(id)value __attribute__((swift_name("to(value:)")));
@end

@interface BaseResource (Extensions)
- (BaseResource<id> *)ifSuccessBlock:(void (^)(id _Nullable))block __attribute__((swift_name("ifSuccess(block:)")));
@end

@interface BaseConfig_ (Extensions)
- (BaseMutableDictionary<NSString *, id> *)allowedFDFlux:(BaseMutableDictionary<NSString *, id> *)flux __attribute__((swift_name("allowedFD(flux:)")));
- (BaseMutableDictionary<NSString *, id> *)allowedMDFlux:(BaseMutableDictionary<NSString *, id> *)flux __attribute__((swift_name("allowedMD(flux:)")));
@end

@interface BaseDzPlayerState (Extensions)
- (BOOL)isBuffering __attribute__((swift_name("isBuffering()")));
- (BOOL)isEnded __attribute__((swift_name("isEnded()")));
- (BOOL)isIdle __attribute__((swift_name("isIdle()")));
- (BOOL)isReady __attribute__((swift_name("isReady()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol BaseKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<BaseKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol BaseKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface BaseKtor_client_coreHttpClient : BaseBase <BaseKotlinx_coroutines_coreCoroutineScope, BaseKtor_ioCloseable>
- (instancetype)initWithEngine:(id<BaseKtor_client_coreHttpClientEngine>)engine userConfig:(BaseKtor_client_coreHttpClientConfig<BaseKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (BaseKtor_client_coreHttpClient *)configBlock:(void (^)(BaseKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<BaseKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BaseKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<BaseKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<BaseKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) BaseKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) BaseKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) BaseKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) BaseKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) BaseKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) BaseKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

@interface BaseKtor_client_coreHttpClient (Extensions)

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)safeGetUrl:(NSString *)url params:(BaseMutableDictionary<NSString *, id> *)params completionHandler:(void (^)(BaseResource<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("safeGet(url:params:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)safePostUrl:(NSString *)url data:(id _Nullable)data completionHandler:(void (^)(BaseResource<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("safePost(url:data:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol BaseKtor_httpHttpMessage
@required
@property (readonly) id<BaseKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface BaseKtor_client_coreHttpResponse : BaseBase <BaseKtor_httpHttpMessage, BaseKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BaseKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<BaseKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) BaseKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) BaseKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) BaseKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) BaseKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

@interface BaseKtor_client_coreHttpResponse (Extensions)

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)toResponseWithCompletionHandler:(void (^)(BaseResource<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toResponse(completionHandler:)")));
@end

__attribute__((swift_name("KotlinNumber")))
@interface BaseKotlinNumber : BaseBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int8_t)toByte __attribute__((swift_name("toByte()")));

/**
 * @note annotations
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.9", errorSince="2.3")
*/
- (unichar)toChar __attribute__((swift_name("toChar()"))) __attribute__((deprecated("Direct conversion to Char is deprecated. Use toInt().toChar() or Char constructor instead.\nIf you override toChar() function in your Number inheritor, it's recommended to gradually deprecate the overriding function and then remove it.\nSee https://youtrack.jetbrains.com/issue/KT-46465 for details about the migration")));
- (double)toDouble __attribute__((swift_name("toDouble()")));
- (float)toFloat __attribute__((swift_name("toFloat()")));
- (int32_t)toInt __attribute__((swift_name("toInt()")));
- (int64_t)toLong __attribute__((swift_name("toLong()")));
- (int16_t)toShort __attribute__((swift_name("toShort()")));
@end

@interface BaseKotlinNumber (Extensions)
- (id)orZero __attribute__((swift_name("orZero()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Advertising_iosKt")))
@interface BaseAdvertising_iosKt : BaseBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)getAdvertisingInfoWithCompletionHandler:(void (^)(BaseAdInfo * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAdvertisingInfo(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatazoomKt")))
@interface BaseDatazoomKt : BaseBase
+ (BaseDatazoom *)datazoomInit:(void (^)(BaseDatazoom *))init __attribute__((swift_name("datazoom(init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatazoomModuleKt")))
@interface BaseDatazoomModuleKt : BaseBase
@property (class, readonly) BaseKoin_coreModule *appModule __attribute__((swift_name("appModule")));
@property (class, readonly) BaseKoin_coreModule *shortLiveScope __attribute__((swift_name("shortLiveScope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceInfo_iosKt")))
@interface BaseDeviceInfo_iosKt : BaseBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)getDeviceInfoWithCompletionHandler:(void (^)(BaseDeviceInfo * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDeviceInfo(completionHandler:)")));
@property (class, readonly) NSString *deviceName __attribute__((swift_name("deviceName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DzPlayerStateKt")))
@interface BaseDzPlayerStateKt : BaseBase
+ (BaseDzPlayerState *)wrapperStateFromState:(int32_t)state __attribute__((swift_name("wrapperStateFrom(state:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventKt")))
@interface BaseEventKt : BaseBase
@property (class, readonly) NSString *CONTAINER_ID __attribute__((swift_name("CONTAINER_ID")));
@property (class, readonly) NSString *GLOBAL_CONTAINER_ID __attribute__((swift_name("GLOBAL_CONTAINER_ID")));
@property (class, readonly) NSArray<BaseEventType *> *globalEvents __attribute__((swift_name("globalEvents")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventManagerKt")))
@interface BaseEventManagerKt : BaseBase
@property (class, readonly) int64_t DELAY_BEFORE_EVENT __attribute__((swift_name("DELAY_BEFORE_EVENT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtensionsKt")))
@interface BaseExtensionsKt : BaseBase
+ (id<BaseKotlinLazy>)injectQualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier mode:(BaseKotlinLazyThreadSafetyMode *)mode parameters:(BaseKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowExtKt")))
@interface BaseFlowExtKt : BaseBase
+ (BaseCSharedFlow<id> *)wrap:(id<BaseKotlinx_coroutines_coreSharedFlow>)receiver __attribute__((swift_name("wrap(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FluxDataKt")))
@interface BaseFluxDataKt : BaseBase
@property (class, readonly) NSSet<BaseFluxDataType *> *ignoreIfZero __attribute__((swift_name("ignoreIfZero")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenericExtensionsKt")))
@interface BaseGenericExtensionsKt : BaseBase
+ (BOOL)isNotNull:(id _Nullable)receiver __attribute__((swift_name("isNotNull(_:)")));
+ (BOOL)isNull:(id _Nullable)receiver __attribute__((swift_name("isNull(_:)")));
+ (id _Nullable)or:(id _Nullable)receiver value:(id _Nullable)value __attribute__((swift_name("or(_:value:)")));
+ (NSDictionary<id, id> *)orDefault:(NSDictionary<id, id> * _Nullable)receiver __attribute__((swift_name("orDefault(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDeviceInfoUseCaseKt")))
@interface BaseGetDeviceInfoUseCaseKt : BaseBase
@property (class, readonly) NSString *PLATFORM __attribute__((swift_name("PLATFORM")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger_iosKt")))
@interface BaseLogger_iosKt : BaseBase
+ (id<BaseLogger>)getLogger __attribute__((swift_name("getLogger()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetaDataStoreExtensionsKt")))
@interface BaseMetaDataStoreExtensionsKt : BaseBase
+ (BaseMutableDictionary<NSString *, id> *)allowedFD:(BaseMutableDictionary<NSString *, id> *)receiver config:(BaseConfig_ * _Nullable)config __attribute__((swift_name("allowedFD(_:config:)")));
+ (BaseMutableDictionary<NSString *, id> *)allowedMD:(BaseMutableDictionary<NSString *, id> *)receiver config:(BaseConfig_ * _Nullable)config __attribute__((swift_name("allowedMD(_:config:)")));
+ (BaseMutableDictionary<NSString *, id> *)exclude:(BaseMutableDictionary<NSString *, id> *)receiver data:(BaseKotlinArray<BaseMutableDictionary<NSString *, id> *> *)data __attribute__((swift_name("exclude(_:data:)")));
+ (BaseKotlinPair<NSString *, id> * _Nullable)getEntryPair:(BaseMutableDictionary<NSString *, id> *)receiver type:(BaseMetaDataType *)type removeFromParent:(BOOL)removeFromParent __attribute__((swift_name("getEntryPair(_:type:removeFromParent:)")));
+ (BaseMutableDictionary<NSString *, id> *)player:(BaseMutableDictionary<NSString *, id> *)receiver __attribute__((swift_name("player(_:)")));
+ (BaseMutableDictionary<NSString *, id> *)video:(BaseMutableDictionary<NSString *, id> *)receiver __attribute__((swift_name("video(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Network_iosKt")))
@interface BaseNetwork_iosKt : BaseBase
+ (BaseKtor_client_coreHttpClient *)httpClientConfig:(void (^)(BaseKtor_client_coreHttpClientConfig<id> *))config __attribute__((swift_name("httpClient(config:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkClientKt")))
@interface BaseNetworkClientKt : BaseBase
@property (class, readonly) int32_t MAX_RETRIES __attribute__((swift_name("MAX_RETRIES")));
@property (class, readonly) int64_t RETRIES_DELAY __attribute__((swift_name("RETRIES_DELAY")));
@property (class, readonly) NSArray<BaseInt *> *retryCodes __attribute__((swift_name("retryCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkInfo_iosKt")))
@interface BaseNetworkInfo_iosKt : BaseBase
+ (BaseNetworkInfo *)getNetworkInfo __attribute__((swift_name("getNetworkInfo()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface BasePlatformKt : BaseBase
+ (BasePlatform *)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveExtensionsKt")))
@interface BasePrimitiveExtensionsKt : BaseBase
+ (int32_t)dividedBy:(BaseInt * _Nullable)receiver value:(int32_t)value __attribute__((swift_name("dividedBy(_:value:)")));
+ (int64_t)dividedBy:(BaseLong * _Nullable)receiver value_:(int64_t)value __attribute__((swift_name("dividedBy(_:value_:)")));
+ (NSString *)orEmpty:(NSString * _Nullable)receiver __attribute__((swift_name("orEmpty(_:)")));
+ (BOOL)orFalse:(BaseBoolean * _Nullable)receiver __attribute__((swift_name("orFalse(_:)")));
+ (BOOL)orTrue:(BaseBoolean * _Nullable)receiver __attribute__((swift_name("orTrue(_:)")));
+ (int64_t)validateDuration:(int64_t)receiver __attribute__((swift_name("validateDuration(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RandomUUID_iosKt")))
@interface BaseRandomUUID_iosKt : BaseBase
+ (NSString *)randomUUID __attribute__((swift_name("randomUUID()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateMachineExtKt")))
@interface BaseStateMachineExtKt : BaseBase
+ (void)defineAndProcessStates:(id<BaseStateMachine>)receiver stateProcessor:(BaseStateTransitionProcessor *)stateProcessor sendEvent:(void (^)(BaseEvent *))sendEvent __attribute__((swift_name("defineAndProcessStates(_:stateProcessor:sendEvent:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateTransitionProcessorKt")))
@interface BaseStateTransitionProcessorKt : BaseBase
+ (void)durationAbnormalityLoggerElapsed:(int64_t)elapsed __attribute__((swift_name("durationAbnormalityLogger(elapsed:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Time_iosKt")))
@interface BaseTime_iosKt : BaseBase
+ (int64_t)currentTime __attribute__((swift_name("currentTime()")));
@end

__attribute__((swift_name("KotlinException")))
@interface BaseKotlinException : BaseKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BaseKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BaseKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface BaseKotlinRuntimeException : BaseKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BaseKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BaseKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface BaseKotlinIllegalStateException : BaseKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BaseKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BaseKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface BaseKotlinCancellationException : BaseKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BaseKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BaseKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol BaseKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface BaseKotlinArray<T> : BaseBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(BaseInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<BaseKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface BaseKotlinEnumCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol BaseKotlinx_coroutines_coreStateFlow <BaseKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol BaseKotlinx_serialization_coreEncoder
@required
- (id<BaseKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<BaseKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<BaseKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<BaseKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<BaseKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) BaseKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol BaseKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<BaseKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BaseKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<BaseKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BaseKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol BaseKotlinx_serialization_coreDecoder
@required
- (id<BaseKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<BaseKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BaseKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<BaseKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<BaseKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) BaseKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface BaseKotlinPair<__covariant A, __covariant B> : BaseBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (BaseKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol BaseKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<BaseKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<BaseKotlinCoroutineContextElement> _Nullable)getKey:(id<BaseKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<BaseKotlinCoroutineContext>)minusKeyKey:(id<BaseKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<BaseKotlinCoroutineContext>)plusContext:(id<BaseKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol BaseKtor_client_coreHttpClientEngine <BaseKotlinx_coroutines_coreCoroutineScope, BaseKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(BaseKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(BaseKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(BaseKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) BaseKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) BaseKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<BaseKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface BaseKtor_client_coreHttpClientEngineConfig : BaseBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property BaseKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((deprecated("The [threadsCount] property is deprecated. The [Dispatchers.IO] is used by default.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface BaseKtor_client_coreHttpClientConfig<T> : BaseBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BaseKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(BaseKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<BaseKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(BaseKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(BaseKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol BaseKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol BaseKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(BaseKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(BaseKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(BaseKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(BaseKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(BaseKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(BaseKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(BaseKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(BaseKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<BaseKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface BaseKtor_eventsEvents : BaseBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(BaseKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<BaseKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(BaseKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(BaseKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface BaseKtor_utilsPipeline<TSubject, TContext> : BaseBase
- (instancetype)initWithPhases:(BaseKotlinArray<BaseKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(BaseKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BaseKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(BaseKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(BaseKtor_utilsPipelinePhase *)reference phase:(BaseKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(BaseKtor_utilsPipelinePhase *)reference phase:(BaseKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(BaseKtor_utilsPipelinePhase *)phase block:(id<BaseKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<BaseKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(BaseKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(BaseKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(BaseKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(BaseKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<BaseKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<BaseKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface BaseKtor_client_coreHttpReceivePipeline : BaseKtor_utilsPipeline<BaseKtor_client_coreHttpResponse *, BaseKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(BaseKotlinArray<BaseKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(BaseKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BaseKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BaseKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface BaseKtor_client_coreHttpRequestPipeline : BaseKtor_utilsPipeline<id, BaseKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(BaseKotlinArray<BaseKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(BaseKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BaseKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BaseKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface BaseKtor_client_coreHttpResponsePipeline : BaseKtor_utilsPipeline<BaseKtor_client_coreHttpResponseContainer *, BaseKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(BaseKotlinArray<BaseKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(BaseKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BaseKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BaseKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface BaseKtor_client_coreHttpSendPipeline : BaseKtor_utilsPipeline<id, BaseKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(BaseKotlinArray<BaseKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(BaseKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BaseKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BaseKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol BaseKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<BaseKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol BaseKtor_httpHeaders <BaseKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface BaseKtor_client_coreHttpClientCall : BaseBase <BaseKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(BaseKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(BaseKtor_client_coreHttpClient *)client requestData:(BaseKtor_client_coreHttpRequestData *)requestData responseData:(BaseKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(BaseKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(BaseKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<BaseKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<BaseKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BaseKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<BaseKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<BaseKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property BaseKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol BaseKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause:(BaseKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(BaseLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(BaseKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(BaseLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(BaseKtor_ioChunkBuffer *)dst completionHandler:(void (^)(BaseInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(BaseKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(BaseKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(BaseInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(BaseInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(BaseInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(BaseBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(BaseByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(BaseDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(BaseFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(BaseKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(BaseKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(BaseInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(BaseLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(BaseKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(BaseKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<BaseKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(BaseShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<BaseKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<BaseKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(BaseBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) BaseKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface BaseKtor_utilsGMTDate : BaseBase <BaseKotlinComparable>
@property (class, readonly, getter=companion) BaseKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(BaseKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (BaseKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(BaseKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(BaseKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) BaseKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) BaseKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface BaseKtor_httpHttpStatusCode : BaseBase <BaseKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(BaseKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (BaseKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (BaseKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface BaseKtor_httpHttpProtocolVersion : BaseBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (BaseKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface BaseKoin_coreModule : BaseBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BaseKotlinPair<BaseKoin_coreModule *, BaseKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(BaseKoin_coreScope *, BaseKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(BaseKotlinArray<BaseKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(NSArray<BaseKoin_coreModule *> *)module __attribute__((swift_name("includes(module_:)")));
- (NSArray<BaseKoin_coreModule *> *)plusModules:(NSArray<BaseKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<BaseKoin_coreModule *> *)plusModule:(BaseKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeScopeSet:(void (^)(BaseKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<BaseKoin_coreQualifier>)qualifier scopeSet:(void (^)(BaseKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (BaseKotlinPair<BaseKoin_coreModule *, BaseKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(BaseKoin_coreScope *, BaseKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) BaseMutableSet<BaseKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol BaseKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol BaseKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface BaseKotlinLazyThreadSafetyMode : BaseKotlinEnum<BaseKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BaseKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) BaseKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) BaseKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (BaseKotlinArray<BaseKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BaseKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface BaseKoin_coreParametersHolder : BaseBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseKoin_coreParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (BaseKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<BaseKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<BaseKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (BaseKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol BaseKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol BaseKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<BaseKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BaseKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BaseKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) BaseKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface BaseKotlinx_serialization_coreSerializersModule : BaseBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<BaseKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BaseKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<BaseKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<BaseKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BaseKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BaseKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BaseKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BaseKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol BaseKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface BaseKotlinx_serialization_coreSerialKind : BaseBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol BaseKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<BaseKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BaseKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BaseKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<BaseKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) BaseKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface BaseKotlinNothing : BaseBase
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol BaseKotlinCoroutineContextElement <BaseKotlinCoroutineContext>
@required
@property (readonly) id<BaseKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol BaseKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface BaseKtor_client_coreHttpRequestData : BaseBase
- (instancetype)initWithUrl:(BaseKtor_httpUrl *)url method:(BaseKtor_httpHttpMethod *)method headers:(id<BaseKtor_httpHeaders>)headers body:(BaseKtor_httpOutgoingContent *)body executionContext:(id<BaseKotlinx_coroutines_coreJob>)executionContext attributes:(id<BaseKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<BaseKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BaseKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BaseKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<BaseKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<BaseKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) BaseKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) BaseKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface BaseKtor_client_coreHttpResponseData : BaseBase
- (instancetype)initWithStatusCode:(BaseKtor_httpHttpStatusCode *)statusCode requestTime:(BaseKtor_utilsGMTDate *)requestTime headers:(id<BaseKtor_httpHeaders>)headers version:(BaseKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<BaseKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<BaseKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<BaseKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) BaseKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) BaseKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) BaseKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) BaseKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface BaseKotlinAbstractCoroutineContextElement : BaseBase <BaseKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<BaseKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<BaseKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol BaseKotlinContinuationInterceptor <BaseKotlinCoroutineContextElement>
@required
- (id<BaseKotlinContinuation>)interceptContinuationContinuation:(id<BaseKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<BaseKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface BaseKotlinx_coroutines_coreCoroutineDispatcher : BaseKotlinAbstractCoroutineContextElement <BaseKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<BaseKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BaseKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<BaseKotlinCoroutineContext>)context block:(id<BaseKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<BaseKotlinCoroutineContext>)context block:(id<BaseKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<BaseKotlinContinuation>)interceptContinuationContinuation:(id<BaseKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<BaseKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (BaseKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (BaseKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(BaseKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<BaseKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface BaseKtor_client_coreProxyConfig : BaseBase
- (instancetype)initWithUrl:(BaseKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BaseKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol BaseKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(BaseKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) BaseKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface BaseKtor_utilsAttributeKey<T> : BaseBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface BaseKtor_eventsEventDefinition<T> : BaseBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol BaseKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface BaseKtor_utilsPipelinePhase : BaseBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol BaseKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol BaseKotlinSuspendFunction2 <BaseKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface BaseKtor_client_coreHttpReceivePipelinePhases : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) BaseKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) BaseKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) BaseKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface BaseKotlinUnit : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface BaseKtor_client_coreHttpRequestPipelinePhases : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) BaseKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) BaseKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) BaseKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) BaseKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) BaseKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol BaseKtor_httpHttpMessageBuilder
@required
@property (readonly) BaseKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface BaseKtor_client_coreHttpRequestBuilder : BaseBase <BaseKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BaseKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (BaseKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<BaseKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<BaseKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<BaseKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (BaseKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(BaseKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (BaseKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(BaseKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(BaseKtor_httpURLBuilder *, BaseKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<BaseKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property BaseKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<BaseKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) BaseKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property BaseKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) BaseKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface BaseKtor_client_coreHttpResponsePipelinePhases : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) BaseKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) BaseKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) BaseKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) BaseKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) BaseKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface BaseKtor_client_coreHttpResponseContainer : BaseBase
- (instancetype)initWithExpectedType:(BaseKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (BaseKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(BaseKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BaseKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface BaseKtor_client_coreHttpSendPipelinePhases : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) BaseKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) BaseKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) BaseKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) BaseKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) BaseKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol BaseKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface BaseKtor_client_coreHttpClientCallCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BaseKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface BaseKtor_utilsTypeInfo : BaseBase
- (instancetype)initWithType:(id<BaseKotlinKClass>)type reifiedType:(id<BaseKotlinKType>)reifiedType kotlinType:(id<BaseKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (BaseKtor_utilsTypeInfo *)doCopyType:(id<BaseKotlinKClass>)type reifiedType:(id<BaseKotlinKType>)reifiedType kotlinType:(id<BaseKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BaseKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<BaseKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<BaseKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol BaseKtor_client_coreHttpRequest <BaseKtor_httpHttpMessage, BaseKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<BaseKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BaseKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) BaseKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) BaseKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) BaseKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface BaseKtor_ioMemory : BaseBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(BaseKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(BaseKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (BaseKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (BaseKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface BaseKtor_ioBuffer : BaseBase
- (instancetype)initWithMemory:(BaseKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) BaseKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (BaseKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(BaseKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) BaseKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface BaseKtor_ioChunkBuffer : BaseKtor_ioBuffer
- (instancetype)initWithMemory:(BaseKtor_ioMemory *)memory origin:(BaseKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<BaseKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (instancetype)initWithMemory:(BaseKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BaseKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (BaseKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (BaseKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<BaseKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) BaseKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) BaseKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface BaseKotlinByteArray : BaseBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(BaseByte *(^)(BaseInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (BaseKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface BaseKtor_ioInput : BaseBase <BaseKtor_ioCloseable>
- (instancetype)initWithHead:(BaseKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<BaseKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) BaseKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BaseKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(BaseKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int32_t)peekToBuffer:(BaseKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int64_t)peekToDestination:(BaseKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<BaseKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<BaseKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<BaseKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface BaseKtor_ioByteReadPacket : BaseKtor_ioInput
- (instancetype)initWithHead:(BaseKtor_ioChunkBuffer *)head pool:(id<BaseKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(BaseKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<BaseKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BaseKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (BaseKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BaseKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(BaseKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol BaseKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (BaseKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol BaseKotlinSuspendFunction1 <BaseKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol BaseKotlinAppendable
@required
- (id<BaseKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<BaseKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<BaseKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface BaseKtor_utilsGMTDateCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BaseKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface BaseKtor_utilsWeekDay : BaseKotlinEnum<BaseKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BaseKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) BaseKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) BaseKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) BaseKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) BaseKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) BaseKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) BaseKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) BaseKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (BaseKotlinArray<BaseKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface BaseKtor_utilsMonth : BaseKotlinEnum<BaseKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BaseKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) BaseKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) BaseKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) BaseKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) BaseKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) BaseKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) BaseKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) BaseKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) BaseKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) BaseKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) BaseKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) BaseKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) BaseKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (BaseKotlinArray<BaseKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface BaseKtor_httpHttpStatusCodeCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (BaseKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) BaseKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) BaseKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) BaseKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) BaseKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) BaseKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) BaseKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) BaseKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) BaseKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) BaseKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) BaseKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) BaseKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) BaseKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) BaseKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) BaseKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) BaseKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) BaseKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) BaseKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) BaseKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) BaseKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) BaseKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) BaseKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) BaseKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) BaseKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) BaseKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) BaseKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) BaseKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) BaseKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) BaseKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) BaseKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) BaseKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) BaseKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) BaseKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) BaseKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) BaseKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) BaseKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) BaseKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) BaseKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) BaseKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) BaseKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) BaseKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) BaseKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) BaseKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) BaseKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) BaseKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) BaseKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) BaseKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) BaseKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) BaseKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) BaseKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) BaseKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) BaseKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) BaseKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) BaseKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<BaseKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface BaseKtor_httpHttpProtocolVersionCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (BaseKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (BaseKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) BaseKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) BaseKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) BaseKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) BaseKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) BaseKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface BaseKoin_coreLockable : BaseBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface BaseKoin_coreInstanceFactory<T> : BaseKoin_coreLockable
- (instancetype)initWithBeanDefinition:(BaseKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) BaseKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(BaseKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(BaseKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(BaseKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(BaseKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) BaseKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface BaseKoin_coreScope : BaseKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<BaseKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(BaseKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (BaseKoin_coreScope *)doCopyScopeQualifier:(id<BaseKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(BaseKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<BaseKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id)getQualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier parameters:(BaseKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<BaseKotlinKClass>)clazz qualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier parameters:(BaseKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<BaseKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (BaseKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullQualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier parameters:(BaseKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<BaseKotlinKClass>)clazz qualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier parameters:(BaseKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (BaseKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()"))) __attribute__((deprecated("No need to use getSource(). You can an use get() directly.")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<BaseKotlinLazy>)injectQualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier mode:(BaseKotlinLazyThreadSafetyMode *)mode parameters:(BaseKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<BaseKotlinLazy>)injectOrNullQualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier mode:(BaseKotlinLazyThreadSafetyMode *)mode parameters:(BaseKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(BaseKotlinArray<BaseKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)refreshScopeInstanceClazz:(id<BaseKotlinKClass>)clazz qualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier instance:(id)instance __attribute__((swift_name("refreshScopeInstance(clazz:qualifier:instance:)")));
- (void)registerCallbackCallback:(id<BaseKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(BaseKotlinArray<BaseKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<BaseKoin_coreParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) BaseKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<BaseKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface BaseKoin_coreScopeDSL : BaseBase
- (instancetype)initWithScopeQualifier:(id<BaseKoin_coreQualifier>)scopeQualifier module:(BaseKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (BaseKotlinPair<BaseKoin_coreModule *, BaseKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(BaseKoin_coreScope *, BaseKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (BaseKotlinPair<BaseKoin_coreModule *, BaseKoin_coreInstanceFactory<id> *> *)scopedQualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(BaseKoin_coreScope *, BaseKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
- (BaseKotlinPair<BaseKoin_coreModule *, BaseKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(BaseKoin_coreScope *, BaseKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) BaseKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<BaseKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface BaseKoin_coreSingleInstanceFactory<T> : BaseKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(BaseKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(BaseKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(BaseKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(BaseKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(BaseKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreParametersHolder.Companion")))
@interface BaseKoin_coreParametersHolderCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKoin_coreParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol BaseKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol BaseKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol BaseKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol BaseKotlinKClass <BaseKotlinKDeclarationContainer, BaseKotlinKAnnotatedElement, BaseKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol BaseKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<BaseKotlinKClass>)kClass provider:(id<BaseKotlinx_serialization_coreKSerializer> (^)(NSArray<id<BaseKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<BaseKotlinKClass>)kClass serializer:(id<BaseKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<BaseKotlinKClass>)baseClass actualClass:(id<BaseKotlinKClass>)actualClass actualSerializer:(id<BaseKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<BaseKotlinKClass>)baseClass defaultDeserializerProvider:(id<BaseKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<BaseKotlinKClass>)baseClass defaultDeserializerProvider:(id<BaseKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<BaseKotlinKClass>)baseClass defaultSerializerProvider:(id<BaseKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface BaseKtor_httpUrl : BaseBase
@property (class, readonly, getter=companion) BaseKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<BaseKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) BaseKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface BaseKtor_httpHttpMethod : BaseBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (BaseKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface BaseKtor_httpOutgoingContent : BaseBase
- (id _Nullable)getPropertyKey:(BaseKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(BaseKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<BaseKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) BaseLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) BaseKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<BaseKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) BaseKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol BaseKotlinx_coroutines_coreJob <BaseKotlinCoroutineContextElement>
@required
- (id<BaseKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<BaseKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause_:(BaseKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
- (BaseKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<BaseKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(BaseKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<BaseKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(BaseKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<BaseKotlinx_coroutines_coreJob>)plusOther_:(id<BaseKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<BaseKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly, getter=isCompleted_) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<BaseKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<BaseKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol BaseKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<BaseKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface BaseKotlinAbstractCoroutineContextKey<B, E> : BaseBase <BaseKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<BaseKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<BaseKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface BaseKotlinx_coroutines_coreCoroutineDispatcherKey : BaseKotlinAbstractCoroutineContextKey<id<BaseKotlinContinuationInterceptor>, BaseKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<BaseKotlinCoroutineContextKey>)baseKey safeCast:(id<BaseKotlinCoroutineContextElement> _Nullable (^)(id<BaseKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol BaseKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol BaseKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<BaseKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<BaseKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<BaseKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<BaseKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface BaseKtor_utilsStringValuesBuilderImpl : BaseBase <BaseKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<BaseKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<BaseKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<BaseKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<BaseKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BaseMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface BaseKtor_httpHeadersBuilder : BaseKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<BaseKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface BaseKtor_client_coreHttpRequestBuilderCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface BaseKtor_httpURLBuilder : BaseBase
- (instancetype)initWithProtocol:(BaseKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<BaseKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (BaseKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<BaseKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<BaseKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property BaseKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol BaseKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<BaseKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<BaseKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface BaseKtor_ioMemoryCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BaseKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface BaseKtor_ioBufferCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BaseKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol BaseKtor_ioObjectPool <BaseKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface BaseKtor_ioChunkBufferCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BaseKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<BaseKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<BaseKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface BaseKotlinByteIterator : BaseBase <BaseKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BaseByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface BaseKtor_ioInputCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface BaseKtor_ioByteReadPacketCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BaseKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface BaseKtor_utilsWeekDayCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (BaseKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (BaseKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface BaseKtor_utilsMonthCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (BaseKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (BaseKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface BaseKoin_coreBeanDefinition<T> : BaseBase
- (instancetype)initWithScopeQualifier:(id<BaseKoin_coreQualifier>)scopeQualifier primaryType:(id<BaseKotlinKClass>)primaryType qualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(BaseKoin_coreScope *, BaseKoin_coreParametersHolder *))definition kind:(BaseKoin_coreKind *)kind secondaryTypes:(NSArray<id<BaseKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (BaseKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<BaseKoin_coreQualifier>)scopeQualifier primaryType:(id<BaseKotlinKClass>)primaryType qualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(BaseKoin_coreScope *, BaseKoin_coreParametersHolder *))definition kind:(BaseKoin_coreKind *)kind secondaryTypes:(NSArray<id<BaseKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<BaseKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<BaseKotlinKClass>)clazz qualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<BaseKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BaseKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(BaseKoin_coreScope *, BaseKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) BaseKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<BaseKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<BaseKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<BaseKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<BaseKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface BaseKoin_coreInstanceFactoryCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface BaseKoin_coreInstanceContext : BaseBase
- (instancetype)initWithKoin:(BaseKoin_coreKoin *)koin scope:(BaseKoin_coreScope *)scope parameters:(BaseKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(koin:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BaseKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) BaseKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) BaseKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface BaseKoin_coreKoin : BaseBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (BaseKoin_coreScope *)createScopeT:(id<BaseKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (BaseKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (BaseKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (BaseKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<BaseKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<BaseKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier parameters:(BaseKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<BaseKotlinKClass>)clazz qualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier parameters:(BaseKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (BaseKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (BaseKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<BaseKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier parameters:(BaseKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<BaseKotlinKClass>)clazz qualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier parameters:(BaseKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (BaseKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (BaseKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<BaseKotlinLazy>)injectQualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier mode:(BaseKotlinLazyThreadSafetyMode *)mode parameters:(BaseKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<BaseKotlinLazy>)injectOrNullQualifier:(id<BaseKoin_coreQualifier> _Nullable)qualifier mode:(BaseKotlinLazyThreadSafetyMode *)mode parameters:(BaseKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<BaseKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(BaseKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<BaseKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) BaseKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) BaseKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) BaseKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) BaseKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol BaseKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(BaseKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface BaseKoin_coreLogger : BaseBase
- (instancetype)initWithLevel:(BaseKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(BaseKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(BaseKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLevel:(BaseKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property BaseKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface BaseKtor_httpUrlCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol BaseKtor_httpParameters <BaseKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface BaseKtor_httpURLProtocol : BaseBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (BaseKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface BaseKtor_httpHttpMethodCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (BaseKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<BaseKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) BaseKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) BaseKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) BaseKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) BaseKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) BaseKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) BaseKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) BaseKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface BaseKtor_httpHeaderValueWithParameters : BaseBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<BaseKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<BaseKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface BaseKtor_httpContentType : BaseKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<BaseKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<BaseKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BaseKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(BaseKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (BaseKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (BaseKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol BaseKotlinx_coroutines_coreChildHandle <BaseKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(BaseKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<BaseKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol BaseKotlinx_coroutines_coreChildJob <BaseKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<BaseKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol BaseKotlinSequence
@required
- (id<BaseKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol BaseKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) BaseKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<BaseKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(BaseKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<BaseKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol BaseKotlinx_coroutines_coreSelectClause0 <BaseKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface BaseKtor_httpURLBuilderCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol BaseKtor_httpParametersBuilder <BaseKtor_utilsStringValuesBuilder>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface BaseKotlinKTypeProjection : BaseBase
- (instancetype)initWithVariance:(BaseKotlinKVariance * _Nullable)variance type:(id<BaseKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (BaseKotlinKTypeProjection *)doCopyVariance:(BaseKotlinKVariance * _Nullable)variance type:(id<BaseKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BaseKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) BaseKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface BaseKoin_coreKind : BaseKotlinEnum<BaseKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BaseKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) BaseKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) BaseKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (BaseKotlinArray<BaseKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface BaseKoin_coreCallbacks<T> : BaseBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (BaseKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol BaseKoin_coreKoinComponent
@required
- (BaseKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol BaseKoin_coreKoinScopeComponent <BaseKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) BaseKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface BaseKoin_coreInstanceRegistry : BaseBase
- (instancetype)initWith_koin:(BaseKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(BaseKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) BaseKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, BaseKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface BaseKoin_corePropertyRegistry : BaseBase
- (instancetype)initWith_koin:(BaseKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface BaseKoin_coreScopeRegistry : BaseBase
- (instancetype)initWith_koin:(BaseKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BaseKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<BaseKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) BaseKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<BaseKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface BaseKoin_coreLevel : BaseKotlinEnum<BaseKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BaseKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) BaseKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) BaseKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) BaseKoin_coreLevel *none __attribute__((swift_name("none")));
+ (BaseKotlinArray<BaseKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface BaseKtor_httpURLProtocolCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (BaseKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) BaseKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) BaseKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) BaseKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) BaseKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) BaseKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, BaseKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface BaseKtor_httpHeaderValueParam : BaseBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (BaseKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface BaseKtor_httpHeaderValueWithParametersCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<BaseKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface BaseKtor_httpContentTypeCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (BaseKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) BaseKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol BaseKotlinx_coroutines_coreParentJob <BaseKotlinx_coroutines_coreJob>
@required
- (BaseKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol BaseKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<BaseKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<BaseKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface BaseKotlinKVariance : BaseKotlinEnum<BaseKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BaseKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) BaseKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) BaseKotlinKVariance *out __attribute__((swift_name("out")));
+ (BaseKotlinArray<BaseKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BaseKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface BaseKotlinKTypeProjectionCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (BaseKotlinKTypeProjection *)contravariantType:(id<BaseKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (BaseKotlinKTypeProjection *)covariantType:(id<BaseKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (BaseKotlinKTypeProjection *)invariantType:(id<BaseKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) BaseKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface BaseKoin_coreScopeRegistryCompanion : BaseBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BaseKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
