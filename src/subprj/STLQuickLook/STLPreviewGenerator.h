//
//  STLPreviewGenerator.h
//  STLQuickLook
//
//  Created by Eberhard Rensch on 07.01.10.
//  Copyright 2010 Pleasant Software. All rights reserved.
//
//  This program is free software; you can redistribute it and/or modify it under
//  the terms of the GNU General Public License as published by the Free Software 
//  Foundation; either version 3 of the License, or (at your option) any later 
//  version.
// 
//  This program is distributed in the hope that it will be useful, but WITHOUT ANY 
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A 
//  PARTICULAR PURPOSE. See the GNU General Public License for more details.
// 
//  You should have received a copy of the GNU General Public License along with 
//  this program; if not, see <http://www.gnu.org/licenses>.
// 
//  Additional permission under GNU GPL version 3 section 7
// 
//  If you modify this Program, or any covered work, by linking or combining it 
//  with the P3DCore.framework (or a modified version of that framework), 
//  containing parts covered by the terms of Pleasant Software's software license, 
//  the licensors of this Program grant you additional permission to convey the 
//  resulting work.
//
#import <Cocoa/Cocoa.h>
#import <OpenGL/OpenGL.h>
#import "STLModel.h"
#import "Vector3.h"
//#import <QTKit/QTKit.h>

@interface STLPreviewGenerator : NSObject {
	BOOL thumbnail;
	CGSize renderSize;
	STLModel* stlModel;
	
	CGFloat cameraOffset;
	CGFloat rotateX;
	CGFloat rotateY;
	
	BOOL wireframe;
	
	Vector3* dimBuildPlattform;
	Vector3* zeroBuildPlattform;
}

@property (retain) STLModel* stlModel;
@property (assign) BOOL wireframe;
@property (assign) CGSize renderSize;

- (id)initWithSTLModel:(STLModel*)model size:(CGSize)size forThumbnail:(BOOL)forThumbnail;

- (CGImageRef)newPreviewImage;
//- (QTMovie*)generatePreviewMovie;
@end
