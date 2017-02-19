//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASNetworkImageNode.h"

@class ASDisplayNode, AVAsset, AVPlayer, AVPlayerItem, NSString;

@interface ASVideoNode : ASNetworkImageNode
{
    struct RecursiveMutex _videoLock;
    id <ASVideoNodeDelegate> _delegate;
    struct {
        unsigned int delegateVideNodeShouldChangePlayerStateTo:1;
        unsigned int delegateVideoDidPlayToEnd:1;
        unsigned int delegateDidTapVideoNode:1;
        unsigned int delegateVideoNodeWillChangePlayerStateToState:1;
        unsigned int delegateVideoNodeDidPlayToTimeInterval:1;
        unsigned int delegateVideoNodeDidStartInitialLoading:1;
        unsigned int delegateVideoNodeDidFinishInitialLoading:1;
        unsigned int delegateVideoNodeDidStallAtTimeInterval:1;
        unsigned int delegateVideoNodeDidRecoverFromStall:1;
        unsigned int delegateVideoPlaybackDidFinish_deprecated:1;
        unsigned int delegateVideoNodeWasTapped_deprecated:1;
        unsigned int delegateVideoNodeDidPlayToSecond_deprecated:1;
    } _delegateFlags;
    _Bool _shouldBePlaying;
    _Bool _shouldAutorepeat;
    _Bool _shouldAutoplay;
    _Bool _shouldAggressivelyRecoverFromStall;
    _Bool _muted;
    int _playerState;
    AVAsset *_asset;
    AVPlayerItem *_currentPlayerItem;
    AVPlayer *_player;
    id _timeObserver;
    int _periodicTimeObserverTimescale;
    CDStruct_1b6d18a9 _timeObserverInterval;
    ASDisplayNode *_playerNode;
    NSString *_gravity;
}

@property(nonatomic) int periodicTimeObserverTimescale; // @synthesize periodicTimeObserverTimescale=_periodicTimeObserverTimescale;
@property(readonly, nonatomic) int playerState; // @synthesize playerState=_playerState;
@property(nonatomic) _Bool shouldAggressivelyRecoverFromStall; // @synthesize shouldAggressivelyRecoverFromStall=_shouldAggressivelyRecoverFromStall;
@property(nonatomic) _Bool shouldAutorepeat; // @synthesize shouldAutorepeat=_shouldAutorepeat;
@property(nonatomic) _Bool shouldAutoplay; // @synthesize shouldAutoplay=_shouldAutoplay;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setShouldBePlaying:(_Bool)arg1;
- (_Bool)shouldBePlaying;
- (void)setPlayer:(id)arg1;
- (void)setPlayerNode:(id)arg1;
- (id)playerNode;
- (void)setCurrentItem:(id)arg1;
@property(readonly) AVPlayerItem *currentItem;
- (void)errorWhilePlaying:(id)arg1;
- (void)videoNodeDidStall:(id)arg1;
- (void)didPlayToEnd:(id)arg1;
- (_Bool)isStateChangeValid:(int)arg1;
- (_Bool)isPlaying;
- (void)pause;
- (_Bool)ready;
- (void)play;
@property(nonatomic) _Bool muted;
@property(retain) NSString *gravity;
@property __weak id <ASVideoNodeDelegate><ASNetworkImageNodeDelegate> delegate;
@property(readonly) AVPlayer *player;
@property(retain) AVAsset *asset;
- (void)setPlayerState:(int)arg1;
- (void)visibilityDidChange:(_Bool)arg1;
- (void)clearFetchedData;
- (void)periodicTimeObserver:(CDStruct_1b6d18a9)arg1;
- (void)fetchData;
- (void)tapped;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setVideoPlaceholderImage:(id)arg1;
- (void)imageAtTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generatePlaceholderImage;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (void)layout;
- (void)removePlayerItemObservers:(id)arg1;
- (void)addPlayerItemObservers:(id)arg1;
- (void)prepareToPlayAsset:(id)arg1 withKeys:(id)arg2;
- (id)constructPlayerItem;
- (id)constructPlayerNode;
- (id)initWithViewBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end
