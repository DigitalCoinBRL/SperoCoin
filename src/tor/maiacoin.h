/* Copyright (c) 2022, Lightburden Developers */
/* See LICENSE for licensing information */

/**
 * \file Lightburden.h
 * \brief Headers for Lightburden.cpp
 **/

#ifndef TOR_LightBurden_H
#define TOR_LightBurden_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* LightBurden_tor_data_directory(
    );

    char const* LightBurden_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

