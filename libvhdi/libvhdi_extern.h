/*
 * The internal extern definition
 *
 * Copyright (C) 2012-2017, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBVHDI_INTERNAL_EXTERN_H )
#define _LIBVHDI_INTERNAL_EXTERN_H

#include <common.h>

/* Define HAVE_LOCAL_LIBVHDI for local use of libvhdi
 */
#if !defined( HAVE_LOCAL_LIBVHDI )

/* If libtool DLL support is enabled set LIBVHDI_DLL_EXPORT
 * before including libvhdi/extern.h
 */
#if defined( _WIN32 ) && defined( DLL_EXPORT )
#define LIBVHDI_DLL_EXPORT
#endif

#include <libvhdi/extern.h>

#else
#define LIBVHDI_EXTERN	/* extern */

#endif /* !defined( HAVE_LOCAL_LIBVHDI ) */

#endif /* !defined( _LIBVHDI_INTERNAL_EXTERN_H ) */

