/***************************************************************************
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *    File  	: lgtp_common_driver.h
 *    Author(s)   : Branden You < branden.you@lge.com >
 *    Description : 
 *
 ***************************************************************************/

#if !defined ( _LGTP_COMMON_DRIVER_H_ )
#define _LGTP_COMMON_DRIVER_H_

/****************************************************************************
* Nested Include Files
****************************************************************************/


/****************************************************************************
* Mainfest Constants / Defines
****************************************************************************/


/****************************************************************************
* Type Definitions
****************************************************************************/


/****************************************************************************
* Exported Variables
****************************************************************************/


/****************************************************************************
* Macros
****************************************************************************/


/****************************************************************************
* Global Function Prototypes
****************************************************************************/
void set_touch_handle(struct i2c_client *client, void *h_touch);
void *get_touch_handle(struct i2c_client *client);


#endif /* _LGTP_COMMON_DRIVER_H_ */

/* End Of File */

