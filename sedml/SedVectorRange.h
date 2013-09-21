/**
 * @file:   SedVectorRange.h
 * @brief:  Implementation of the SedVectorRange class
 * @author: Frank T. Bergmann
 *
 * <!--------------------------------------------------------------------------
 * This file is part of libSEDML.  Please visit http://sed-ml.org for more
 * information about SEDML, and the latest version of libSEDML.
 *
 * Copyright (c) 2013, Frank T. Bergmann  
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met: 
 * 
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer. 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution. 
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ------------------------------------------------------------------------ -->
 */


#ifndef SedVectorRange_H__
#define SedVectorRange_H__


#include <sedml/common/extern.h>
#include <sedml/common/sedmlfwd.h>


#ifdef __cplusplus


#include <string>


#include <sedml/SedBase.h>
#include <sedml/SedListOf.h>
#include <sedml/SedNamespaces.h>


LIBSEDML_CPP_NAMESPACE_BEGIN


#include <sedml/SedRange.h>


class LIBSEDML_EXTERN SedVectorRange : public SedRange
{

protected:



public:

	/**
	 * Creates a new SedVectorRange with the given level, version, and package version.
	 *
	 * @param level an unsigned int, the SEDML Level to assign to this SedVectorRange
	 *
	 * @param version an unsigned int, the SEDML Version to assign to this SedVectorRange
	 *
	 * @param pkgVersion an unsigned int, the SEDML Sed Version to assign to this SedVectorRange
	 */
	SedVectorRange(unsigned int level      = SEDML_DEFAULT_LEVEL,
	               unsigned int version    = SEDML_DEFAULT_VERSION);


	/**
	 * Creates a new SedVectorRange with the given SedNamespaces object.
	 *
	 * @param sedns the SedNamespaces object
	 */
	SedVectorRange(SedNamespaces* sedns);


 	/**
	 * Copy constructor for SedVectorRange.
	 *
	 * @param orig; the SedVectorRange instance to copy.
	 */
	SedVectorRange(const SedVectorRange& orig);


 	/**
	 * Assignment operator for SedVectorRange.
	 *
	 * @param rhs; the object whose values are used as the basis
	 * of the assignment
	 */
	SedVectorRange& operator=(const SedVectorRange& rhs);


 	/**
	 * Creates and returns a deep copy of this SedVectorRange object.
	 *
	 * @return a (deep) copy of this SedVectorRange object.
	 */
	virtual SedVectorRange* clone () const;


 	/**
	 * Destructor for SedVectorRange.
	 */
	virtual ~SedVectorRange();


 	/**
	 * Returns the XML element name of this object, which for SedVectorRange, is
	 * always @c "sedVectorRange".
	 *
	 * @return the name of this element, i.e. @c "sedVectorRange".
	 */
	virtual const std::string& getElementName () const;


	/**
	 * Returns the libSEDML type code for this SEDML object.
	 * 
	 * @if clike LibSEDML attaches an identifying code to every kind of SEDML
	 * object.  These are known as <em>SEDML type codes</em>.  The set of
	 * possible type codes is defined in the enumeration #SEDMLTypeCode_t.
	 * The names of the type codes all begin with the characters @c
	 * SEDML_. @endif@if java LibSEDML attaches an identifying code to every
	 * kind of SEDML object.  These are known as <em>SEDML type codes</em>.  In
	 * other languages, the set of type codes is stored in an enumeration; in
	 * the Java language interface for libSEDML, the type codes are defined as
	 * static integer constants in the interface class {@link
	 * libsbmlConstants}.  The names of the type codes all begin with the
	 * characters @c SEDML_. @endif@if python LibSEDML attaches an identifying
	 * code to every kind of SEDML object.  These are known as <em>SEDML type
	 * codes</em>.  In the Python language interface for libSEDML, the type
	 * codes are defined as static integer constants in the interface class
	 * @link libsbml@endlink.  The names of the type codes all begin with the
	 * characters @c SEDML_. @endif@if csharp LibSEDML attaches an identifying
	 * code to every kind of SEDML object.  These are known as <em>SEDML type
	 * codes</em>.  In the C# language interface for libSEDML, the type codes
	 * are defined as static integer constants in the interface class @link
	 * libsbmlcs.libsbml@endlink.  The names of the type codes all begin with
	 * the characters @c SEDML_. @endif
	 *
	 * @return the SEDML type code for this object, or
	 * @link SEDMLTypeCode_t#SEDML_UNKNOWN SEDML_UNKNOWN@endlink (default).
	 *
	 * @see getElementName()
	 */
	virtual int getTypeCode () const;


	/**
	 * Predicate returning @c true if all the required attributes
	 * for this SedVectorRange object have been set.
	 *
	 * @note The required attributes for a SedVectorRange object are:
	 *
	 * @return a boolean value indicating whether all the required
	 * attributes for this object have been defined.
	 */
	virtual bool hasRequiredAttributes() const;


/** @cond doxygen-libsbml-internal */

	/**
	 * Subclasses should override this method to write out their contained
	 * SEDML objects as XML elements.  Be sure to call your parents
	 * implementation of this method as well.
	 */
	virtual void writeElements (XMLOutputStream& stream) const;


/** @endcond doxygen-libsbml-internal */


/** @cond doxygen-libsbml-internal */

	/**
	 * Accepts the given SedVisitor.
	 */
	virtual bool accept (SedVisitor& v) const;


/** @endcond doxygen-libsbml-internal */


/** @cond doxygen-libsbml-internal */

	/**
	 * Sets the parent SedDocument.
	 */
	virtual void setSedDocument (SedDocument* d);


/** @endcond doxygen-libsbml-internal */


protected:

/** @cond doxygen-libsbml-internal */

	/**
	 * return the SEDML object corresponding to next XMLToken.
	 */
	virtual SedBase* createObject(XMLInputStream& stream);


/** @endcond doxygen-libsbml-internal */


/** @cond doxygen-libsbml-internal */

	/**
	 * Get the list of expected attributes for this element.
	 */
	virtual void addExpectedAttributes(ExpectedAttributes& attributes);


/** @endcond doxygen-libsbml-internal */


/** @cond doxygen-libsbml-internal */

	/**
	 * Read values from the given XMLAttributes set into their specific fields.
	 */
	virtual void readAttributes (const XMLAttributes& attributes,
	                             const ExpectedAttributes& expectedAttributes);


/** @endcond doxygen-libsbml-internal */


/** @cond doxygen-libsbml-internal */

	/**
	 * Write values of XMLAttributes to the output stream.
	 */
	virtual void writeAttributes (XMLOutputStream& stream) const;


/** @endcond doxygen-libsbml-internal */



};



LIBSEDML_CPP_NAMESPACE_END

#endif  /*  __cplusplus  */

#ifndef SWIG

LIBSEDML_CPP_NAMESPACE_BEGIN
BEGIN_C_DECLS

LIBSEDML_EXTERN
SedVectorRange_t *
SedVectorRange_create(unsigned int level, unsigned int version);


LIBSEDML_EXTERN
void
SedVectorRange_free(SedVectorRange_t * svr);


LIBSEDML_EXTERN
SedVectorRange_t *
SedVectorRange_clone(SedVectorRange_t * svr);


LIBSEDML_EXTERN
int
SedVectorRange_hasRequiredAttributes(SedVectorRange_t * svr);




END_C_DECLS
LIBSEDML_CPP_NAMESPACE_END

#endif  /*  !SWIG  */

#endif /*  SedVectorRange_H__  */

