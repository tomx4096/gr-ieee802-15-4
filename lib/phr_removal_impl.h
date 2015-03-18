/* -*- c++ -*- */
/* 
 * Copyright 2014 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_IEEE802_15_4_PHR_REMOVAL_IMPL_H
#define INCLUDED_IEEE802_15_4_PHR_REMOVAL_IMPL_H

#include <ieee802_15_4/phr_removal.h>

namespace gr {
  namespace ieee802_15_4 {

    class phr_removal_impl : public phr_removal
    {
     private:
      const static int PHR_LEN = 12;
      const static int MAX_PHY_SIZE = 127;
      unsigned char d_buf[127];
      void remove_phr(pmt::pmt_t msg);
      void pack(unsigned char* dest_packed, unsigned char* src_unpacked, int nbytes);

     public:
      phr_removal_impl(std::vector<unsigned char> phr);
      ~phr_removal_impl();
    };

  } // namespace ieee802_15_4
} // namespace gr

#endif /* INCLUDED_IEEE802_15_4_PHR_REMOVAL_IMPL_H */

