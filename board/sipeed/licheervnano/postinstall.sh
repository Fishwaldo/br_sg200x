#!/bin/sh
echo "Creating Filesystem Image"
cd $BINARIES_DIR
rm sdcard.img
cp $BR2_EXTERNAL_LICHEERVNANO_BR_PATH/board/sipeed/licheervnano/fit-image.its $BINARIES_DIR/fit-image.its
$BINARIES_DIR/../host/bin/mkimage -f fit-image.its $BINARIES_DIR/boot.sd
echo "Creating Filesystem Image"
$BASE_DIR/../support/scripts/genimage.sh -c $BR2_EXTERNAL_LICHEERVNANO_BR_PATH/board/sipeed/licheervnano/genimage.cfg
echo "Completed - Images are at $BINARIES_DIR"