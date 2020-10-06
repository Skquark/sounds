// Autogenerated from Pigeon (v0.1.7), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class FLTResponse;
@class FLTInitializePlayer;
@class FLTSoundPlayerProxy;
@class FLTInitializePlayerWithShade;
@class FLTStartPlayer;
@class FLTTrackProxy;
@class FLTMediaFormatProxy;
@class FLTSeekToPlayer;
@class FLTDurationResponse;
@class FLTGetDuration;
@class FLTSetVolume;
@class FLTSetPlaybackProgressInterval;
@class FLTRequestAudioFocus;
@class FLTAudioFocusProxy;
@class FLTSoundRecorderProxy;
@class FLTStartRecording;
@class FLTAudioSourceProxy;
@class FLTQualityProxy;
@class FLTMediaFormatResponse;
@class FLTSetRecordingProgressInterval;
@class FLTOnPlaybackProgress;
@class FLTOnRecordingProgress;
@class FLTOnPlaybackStopped;
@class FLTOnShadeSkipForward;
@class FLTOnShadeSkipBackward;
@class FLTOnShadeResumed;

@interface FLTResponse : NSObject
@property(nonatomic, strong, nullable) NSNumber * success;
@property(nonatomic, strong, nullable) NSNumber * errorCode;
@property(nonatomic, copy, nullable) NSString * error;
@end

@interface FLTInitializePlayer : NSObject
@property(nonatomic, strong, nullable) FLTSoundPlayerProxy * player;
@property(nonatomic, strong, nullable) NSNumber * playInBackground;
@end

@interface FLTSoundPlayerProxy : NSObject
@property(nonatomic, copy, nullable) NSString * uuid;
@end

@interface FLTInitializePlayerWithShade : NSObject
@property(nonatomic, strong, nullable) FLTSoundPlayerProxy * player;
@property(nonatomic, strong, nullable) NSNumber * playInBackground;
@property(nonatomic, strong, nullable) NSNumber * canPause;
@property(nonatomic, strong, nullable) NSNumber * canSkipBackward;
@property(nonatomic, strong, nullable) NSNumber * canSkipForward;
@end

@interface FLTStartPlayer : NSObject
@property(nonatomic, strong, nullable) FLTSoundPlayerProxy * player;
@property(nonatomic, strong, nullable) FLTTrackProxy * track;
@property(nonatomic, strong, nullable) NSNumber * startAt;
@end

@interface FLTTrackProxy : NSObject
@property(nonatomic, copy, nullable) NSString * uuid;
@property(nonatomic, copy, nullable) NSString * path;
@property(nonatomic, strong, nullable) FLTMediaFormatProxy * mediaFormat;
@end

@interface FLTMediaFormatProxy : NSObject
@property(nonatomic, copy, nullable) NSString * name;
@property(nonatomic, strong, nullable) NSNumber * sampleRate;
@property(nonatomic, strong, nullable) NSNumber * numChannels;
@property(nonatomic, strong, nullable) NSNumber * bitRate;
@property(nonatomic, copy, nullable) NSString * adtsAac;
@property(nonatomic, copy, nullable) NSString * capOpus;
@property(nonatomic, copy, nullable) NSString * mp3;
@property(nonatomic, copy, nullable) NSString * oggOpus;
@property(nonatomic, copy, nullable) NSString * oggVorbis;
@property(nonatomic, copy, nullable) NSString * pcm;
@end

@interface FLTSeekToPlayer : NSObject
@property(nonatomic, strong, nullable) FLTSoundPlayerProxy * player;
@property(nonatomic, strong, nullable) NSNumber * milliseconds;
@end

@interface FLTDurationResponse : NSObject
@property(nonatomic, strong, nullable) NSNumber * duration;
@end

@interface FLTGetDuration : NSObject
@property(nonatomic, copy, nullable) NSString * path;
@end

@interface FLTSetVolume : NSObject
@property(nonatomic, strong, nullable) FLTSoundPlayerProxy * player;
@property(nonatomic, strong, nullable) NSNumber * volume;
@end

@interface FLTSetPlaybackProgressInterval : NSObject
@property(nonatomic, strong, nullable) FLTSoundPlayerProxy * player;
@property(nonatomic, strong, nullable) NSNumber * interval;
@end

@interface FLTRequestAudioFocus : NSObject
@property(nonatomic, strong, nullable) FLTSoundPlayerProxy * player;
@property(nonatomic, strong, nullable) FLTAudioFocusProxy * audioFocus;
@end

@interface FLTAudioFocusProxy : NSObject
@property(nonatomic, strong, nullable) NSNumber * audioFocusMode;
@property(nonatomic, strong, nullable) NSNumber * stopOthersNoResume;
@property(nonatomic, strong, nullable) NSNumber * stopOthersWithResume;
@property(nonatomic, strong, nullable) NSNumber * hushOthersWithResume;
@end

@interface FLTSoundRecorderProxy : NSObject
@property(nonatomic, copy, nullable) NSString * uuid;
@end

@interface FLTStartRecording : NSObject
@property(nonatomic, strong, nullable) FLTSoundRecorderProxy * recorder;
@property(nonatomic, strong, nullable) FLTTrackProxy * track;
@property(nonatomic, strong, nullable) FLTAudioSourceProxy * audioSource;
@property(nonatomic, strong, nullable) FLTQualityProxy * quality;
@end

@interface FLTAudioSourceProxy : NSObject
@property(nonatomic, strong, nullable) NSNumber * audioSource;
@property(nonatomic, strong, nullable) NSNumber * defaultSource;
@property(nonatomic, strong, nullable) NSNumber * mic;
@property(nonatomic, strong, nullable) NSNumber * voiceUplink;
@property(nonatomic, strong, nullable) NSNumber * voiceDownlink;
@property(nonatomic, strong, nullable) NSNumber * camcorder;
@property(nonatomic, strong, nullable) NSNumber * voiceRecognition;
@property(nonatomic, strong, nullable) NSNumber * voiceCommunication;
@property(nonatomic, strong, nullable) NSNumber * remoteSubmix;
@property(nonatomic, strong, nullable) NSNumber * unprocessed;
@property(nonatomic, strong, nullable) NSNumber * radioTuner;
@property(nonatomic, strong, nullable) NSNumber * hotword;
@end

@interface FLTQualityProxy : NSObject
@property(nonatomic, strong, nullable) NSNumber * quality;
@property(nonatomic, strong, nullable) NSNumber * min;
@property(nonatomic, strong, nullable) NSNumber * low;
@property(nonatomic, strong, nullable) NSNumber * medium;
@property(nonatomic, strong, nullable) NSNumber * high;
@property(nonatomic, strong, nullable) NSNumber * max;
@end

@interface FLTMediaFormatResponse : NSObject
@property(nonatomic, strong, nullable) NSArray * mediaFormats;
@end

@interface FLTSetRecordingProgressInterval : NSObject
@property(nonatomic, strong, nullable) FLTSoundRecorderProxy * recorder;
@property(nonatomic, strong, nullable) NSNumber * interval;
@end

@interface FLTOnPlaybackProgress : NSObject
@property(nonatomic, strong, nullable) FLTSoundPlayerProxy * player;
@property(nonatomic, strong, nullable) FLTTrackProxy * track;
@property(nonatomic, strong, nullable) NSNumber * duration;
@property(nonatomic, strong, nullable) NSNumber * position;
@end

@interface FLTOnRecordingProgress : NSObject
@property(nonatomic, strong, nullable) FLTSoundRecorderProxy * recorder;
@property(nonatomic, strong, nullable) FLTTrackProxy * track;
@property(nonatomic, strong, nullable) NSNumber * decibels;
@property(nonatomic, strong, nullable) NSNumber * duration;
@end

@interface FLTOnPlaybackStopped : NSObject
@property(nonatomic, strong, nullable) FLTSoundPlayerProxy * player;
@property(nonatomic, strong, nullable) FLTTrackProxy * track;
@property(nonatomic, strong, nullable) NSNumber * errorCode;
@property(nonatomic, copy, nullable) NSString * error;
@end

@interface FLTOnShadeSkipForward : NSObject
@property(nonatomic, strong, nullable) FLTSoundPlayerProxy * player;
@property(nonatomic, strong, nullable) FLTTrackProxy * track;
@end

@interface FLTOnShadeSkipBackward : NSObject
@property(nonatomic, strong, nullable) FLTSoundPlayerProxy * player;
@property(nonatomic, strong, nullable) FLTTrackProxy * track;
@end

@interface FLTOnShadeResumed : NSObject
@property(nonatomic, strong, nullable) FLTSoundPlayerProxy * player;
@property(nonatomic, strong, nullable) FLTTrackProxy * track;
@end

@protocol FLTSoundsToPlatformApi
-(nullable FLTResponse *)initializePlayer:(FLTInitializePlayer*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)initializePlayerWithShade:(FLTInitializePlayerWithShade*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)releasePlayer:(FLTSoundPlayerProxy*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)startPlayer:(FLTStartPlayer*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)stopPlayer:(FLTSoundPlayerProxy*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)pausePlayer:(FLTSoundPlayerProxy*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)resumePlayer:(FLTSoundPlayerProxy*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)seekToPlayer:(FLTSeekToPlayer*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTDurationResponse *)getDuration:(FLTGetDuration*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)setVolume:(FLTSetVolume*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)setPlaybackProgressInterval:(FLTSetPlaybackProgressInterval*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)requestAudioFocus:(FLTRequestAudioFocus*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)releaseAudioFocus:(FLTSoundPlayerProxy*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)isShadeSupported:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)isShadePauseSupported:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)isShadeSkipForwardSupported:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)isShadeSkipBackwardsSupported:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)isBackgroundPlaybackSupported:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)initializeRecorder:(FLTSoundRecorderProxy*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)releaseRecorder:(FLTSoundRecorderProxy*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)startRecording:(FLTStartRecording*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)stopRecording:(FLTSoundRecorderProxy*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)pauseRecording:(FLTSoundRecorderProxy*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)resumeRecording:(FLTSoundRecorderProxy*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTMediaFormatResponse *)getNativeEncoderFormats:(FLTMediaFormatProxy*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTMediaFormatResponse *)getNativeDecoderFormats:(FLTMediaFormatProxy*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable FLTResponse *)setRecordingProgressInterval:(FLTSetRecordingProgressInterval*)input error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLTSoundsToPlatformApiSetup(id<FlutterBinaryMessenger> binaryMessenger, id<FLTSoundsToPlatformApi> _Nullable api);

@interface FLTSoundsFromPlatformApi : NSObject
- (instancetype)initWithBinaryMessenger:(id<FlutterBinaryMessenger>)binaryMessenger;
- (void)onPlaybackProgress:(FLTOnPlaybackProgress*)input completion:(void(^)(NSError* _Nullable))completion;
- (void)onRecordingProgress:(FLTOnRecordingProgress*)input completion:(void(^)(NSError* _Nullable))completion;
- (void)onPlaybackStopped:(FLTOnPlaybackStopped*)input completion:(void(^)(NSError* _Nullable))completion;
- (void)onShadeSkipForward:(FLTOnShadeSkipForward*)input completion:(void(^)(NSError* _Nullable))completion;
- (void)onShadeSkipBackward:(FLTOnShadeSkipBackward*)input completion:(void(^)(NSError* _Nullable))completion;
- (void)onShadePaused:(FLTSoundPlayerProxy*)input completion:(void(^)(NSError* _Nullable))completion;
- (void)onShadeResumed:(FLTOnShadeResumed*)input completion:(void(^)(NSError* _Nullable))completion;
@end
NS_ASSUME_NONNULL_END
