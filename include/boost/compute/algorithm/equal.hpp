//---------------------------------------------------------------------------//
// Copyright (c) 2013 Kyle Lutz <kyle.r.lutz@gmail.com>
//
// Distributed under the Boost Software License, Version 1.0
// See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt
//
// See http://kylelutz.github.com/compute for more information.
//---------------------------------------------------------------------------//

#ifndef BOOST_COMPUTE_ALGORITHM_EQUAL_HPP
#define BOOST_COMPUTE_ALGORITHM_EQUAL_HPP

#include <boost/compute/system.hpp>
#include <boost/compute/command_queue.hpp>
#include <boost/compute/algorithm/mismatch.hpp>

namespace boost {
namespace compute {

template<class InputIterator1, class InputIterator2>
inline bool equal(InputIterator1 first1,
                  InputIterator1 last1,
                  InputIterator2 first2,
                  command_queue &queue = system::default_queue())
{
    return ::boost::compute::mismatch(first1,
                                      last1,
                                      first2,
                                      queue).first == last1;
}

} // end compute namespace
} // end boost namespace

#endif // BOOST_COMPUTE_ALGORITHM_EQUAL_HPP
