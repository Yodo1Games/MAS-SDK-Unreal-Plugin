//
//  ZFPlayerControlViewDelegate.h
//
// Copyright (c) 2016年 任子丰 ( http://github.com/renzifeng )
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

/*
* This file may have been modified by ByteDance Ltd.
* Original Files：ZFPlayerControlViewDelegate/ZFPlayer (http://github.com/renzifeng)
* Copyright  2016 任子丰.
* SPDX-License-Identifier: MIT
*/

#ifndef PAG_ZFPlayerControlViewDelegate_h
#define PAG_ZFPlayerControlViewDelegate_h


#endif /* ZFPlayerControlViewDelegate_h */

@protocol PAG_ZFPlayerControlViewDelagate <NSObject>

@optional
/** 返回按钮事件 */
- (void)zf_controlView:(UIView *)controlView backAction:(UIButton *)sender;
/** cell播放中小屏状态 关闭按钮事件 */
- (void)zf_controlView:(UIView *)controlView closeAction:(UIButton *)sender;
/** 播放按钮事件 */
- (void)zf_controlView:(UIView *)controlView playAction:(UIButton *)sender;
/** 全屏按钮事件 */
- (void)zf_controlView:(UIView *)controlView fullScreenAction:(UIButton *)sender;
/** 锁定屏幕方向按钮时间 */
- (void)zf_controlView:(UIView *)controlView lockScreenAction:(UIButton *)sender;
/** 重播按钮事件 */
- (void)zf_controlView:(UIView *)controlView repeatPlayAction:(UIButton *)sender;
/** 加载失败按钮事件 */
- (void)zf_controlView:(UIView *)controlView failAction:(UIButton *)sender;
/** slider的点击事件（点击slider控制进度） */
- (void)zf_controlView:(UIView *)controlView progressSliderTap:(CGFloat)value;
/** 开始触摸slider */
- (void)zf_controlView:(UIView *)controlView progressSliderTouchBegan:(UISlider *)slider;
/** slider触摸中 */
- (void)zf_controlView:(UIView *)controlView progressSliderValueChanged:(UISlider *)slider;
/** slider触摸结束 */
- (void)zf_controlView:(UIView *)controlView progressSliderTouchEnded:(UISlider *)slider;
/** 控制层即将显示 */
- (void)zf_controlViewWillShow:(UIView *)controlView isFullscreen:(BOOL)fullscreen;
/** 控制层即将隐藏 */
- (void)zf_controlViewWillHidden:(UIView *)controlView isFullscreen:(BOOL)fullscreen;
/** 控制层被点击 */
- (void)zf_controlViewTouchesBegan:(UIView *)controlView;

@end
