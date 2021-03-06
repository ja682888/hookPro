//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QRecyclableView.h"
#import "QSMCalloutViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, QSMCalloutView, UIImage, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface QAnnotationView : UIView <UIGestureRecognizerDelegate, QRecyclableView, QSMCalloutViewDelegate>
{
    _Bool highlighted;
    _Bool _selected;
    _Bool selectedBeforeStarting;
    _Bool canShowCallout;
    _Bool draggable;
    NSString *_reuseIdentifier;
    id <QAnnotation> _annotation;
    UIView *_leftCalloutAccessoryView;
    UIView *_rightCalloutAccessoryView;
    QSMCalloutView *tip;
    unsigned long long _dragState;
    UITapGestureRecognizer *tapGestureGecognizer;
    UILongPressGestureRecognizer *longPressGestureGecognizer;
    UITapGestureRecognizer *_tapTwiceGestureGecognizer;
    struct CGPoint _centerOffset;
    struct CGPoint calloutOffset;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapTwiceGestureGecognizer; // @synthesize tapTwiceGestureGecognizer=_tapTwiceGestureGecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureGecognizer; // @synthesize longPressGestureGecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureGecognizer; // @synthesize tapGestureGecognizer;
@property(nonatomic) unsigned long long dragState; // @synthesize dragState=_dragState;
@property(nonatomic, getter=isDraggable) _Bool draggable; // @synthesize draggable;
@property(retain, nonatomic) QSMCalloutView *tip; // @synthesize tip;
@property(retain, nonatomic) UIView *rightCalloutAccessoryView; // @synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView;
@property(retain, nonatomic) UIView *leftCalloutAccessoryView; // @synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView;
@property(nonatomic) struct CGPoint calloutOffset; // @synthesize calloutOffset;
@property(nonatomic) _Bool canShowCallout; // @synthesize canShowCallout;
@property(nonatomic) _Bool selectedBeforeStarting; // @synthesize selectedBeforeStarting;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted;
@property(nonatomic) struct CGPoint centerOffset; // @synthesize centerOffset=_centerOffset;
@property(retain, nonatomic) id <QAnnotation> annotation; // @synthesize annotation=_annotation;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)initGestureRecognizers;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeFromSuperview;
- (void)longPressGesture:(id)arg1;
- (void)tapTwiceGesture:(id)arg1;
- (void)tapGesture:(id)arg1;
- (void)hideTipAnimated:(_Bool)arg1;
- (void)showTipAnimated:(_Bool)arg1;
- (void)setDragState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)supportDragOperation;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)prepareForReuse;
@property(retain, nonatomic) UIImage *image;
- (void)calloutAccessoryAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (double)calloutView:(id)arg1 delayForRepositionWithSize:(struct CGSize)arg2;
- (void)removeObserverForAnnotation:(id)arg1;
- (void)addObserverForAnnotation:(id)arg1;
- (void)removeTargetForControl:(id)arg1;
- (void)addTargetForControl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

