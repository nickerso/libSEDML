/**
 * @file:   DataGenerator.h
 * @brief:  Implementation of the DataGenerator class
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


#ifndef DataGenerator_H__
#define DataGenerator_H__


#include <sedml/common/extern.h>
#include <sedml/common/sedmlfwd.h>


#ifdef __cplusplus


#include <string>


#include <sedml/SedBase.h>
#include <sedml/SedListOf.h>
#include <sedml/SedMLNamespaces.h>


LIBSEDML_CPP_NAMESPACE_BEGIN


#include <sedml/SedMLVariable.h>
#include <sedml/SedMLParameter.h>


class LIBSEDML_EXTERN DataGenerator : public SedBase
{

protected:

	std::string   mId;
	std::string   mName;
	SedListOfSedMLVariables   mVariable;
	SedListOfSedMLParameters   mParameter;
	ASTNode*      mMath;


public:

	/**
	 * Creates a new DataGenerator with the given level, version, and package version.
	 *
	 * @param level an unsigned int, the SEDML Level to assign to this DataGenerator
	 *
	 * @param version an unsigned int, the SEDML Version to assign to this DataGenerator
	 *
	 * @param pkgVersion an unsigned int, the SEDML SedML Version to assign to this DataGenerator
	 */
	DataGenerator(unsigned int level      = SEDML_DEFAULT_LEVEL,
	              unsigned int version    = SEDML_DEFAULT_VERSION);


	/**
	 * Creates a new DataGenerator with the given SedMLNamespaces object.
	 *
	 * @param sedmlns the SedMLNamespaces object
	 */
	DataGenerator(SedMLNamespaces* sedmlns);


 	/**
	 * Copy constructor for DataGenerator.
	 *
	 * @param orig; the DataGenerator instance to copy.
	 */
	DataGenerator(const DataGenerator& orig);


 	/**
	 * Assignment operator for DataGenerator.
	 *
	 * @param rhs; the object whose values are used as the basis
	 * of the assignment
	 */
	DataGenerator& operator=(const DataGenerator& rhs);


 	/**
	 * Creates and returns a deep copy of this DataGenerator object.
	 *
	 * @return a (deep) copy of this DataGenerator object.
	 */
	virtual DataGenerator* clone () const;


 	/**
	 * Destructor for DataGenerator.
	 */
	virtual ~DataGenerator();


 	/**
	 * Returns the value of the "id" attribute of this DataGenerator.
	 *
	 * @return the value of the "id" attribute of this DataGenerator as a string.
	 */
	virtual const std::string& getId() const;


	/**
	 * Predicate returning @c true or @c false depending on whether this
	 * DataGenerator's "id" attribute has been set.
	 *
	 * @return @c true if this DataGenerator's "id" attribute has been set,
	 * otherwise @c false is returned.
	 */
	virtual bool isSetId() const;


	/**
	 * Sets the value of the "id" attribute of this DataGenerator.
	 *
	 * @param id; const std::string& value of the "id" attribute to be set
	 *
	 * @return integer value indicating success/failure of the
	 * function.  @if clike The value is drawn from the
	 * enumeration #OperationReturnValues_t. @endif The possible values
	 * returned by this function are:
	 * @li LIBSEDML_OPERATION_SUCCESS
	 * @li LIBSEDML_INVALID_ATTRIBUTE_VALUE
	 */
	virtual int setId(const std::string& id);


	/**
	 * Unsets the value of the "id" attribute of this DataGenerator.
	 *
	 * @return integer value indicating success/failure of the
	 * function.  @if clike The value is drawn from the
	 * enumeration #OperationReturnValues_t. @endif The possible values
	 * returned by this function are:
	 * @li LIBSEDML_OPERATION_SUCCESS
	 * @li LIBSEDML_OPERATION_FAILED
	 */
	virtual int unsetId();


	/**
	 * Returns the value of the "name" attribute of this DataGenerator.
	 *
	 * @return the value of the "name" attribute of this DataGenerator as a string.
	 */
	virtual const std::string& getName() const;


	/**
	 * Predicate returning @c true or @c false depending on whether this
	 * DataGenerator's "name" attribute has been set.
	 *
	 * @return @c true if this DataGenerator's "name" attribute has been set,
	 * otherwise @c false is returned.
	 */
	virtual bool isSetName() const;


	/**
	 * Sets the value of the "name" attribute of this DataGenerator.
	 *
	 * @param name; const std::string& value of the "name" attribute to be set
	 *
	 * @return integer value indicating success/failure of the
	 * function.  @if clike The value is drawn from the
	 * enumeration #OperationReturnValues_t. @endif The possible values
	 * returned by this function are:
	 * @li LIBSEDML_OPERATION_SUCCESS
	 * @li LIBSEDML_INVALID_ATTRIBUTE_VALUE
	 */
	virtual int setName(const std::string& name);


	/**
	 * Unsets the value of the "name" attribute of this DataGenerator.
	 *
	 * @return integer value indicating success/failure of the
	 * function.  @if clike The value is drawn from the
	 * enumeration #OperationReturnValues_t. @endif The possible values
	 * returned by this function are:
	 * @li LIBSEDML_OPERATION_SUCCESS
	 * @li LIBSEDML_OPERATION_FAILED
	 */
	virtual int unsetName();


	/**
	 * Returns the "math" element of this DataGenerator.
	 *
	 * @return the "math" element of this DataGenerator.
	 */
	virtual const ASTNode* getMath() const;


	/**
	 * Predicate returning @c true or @c false depending on whether this
	 * DataGenerator's "math" element has been set.
	 *
	 * @return @c true if this DataGenerator's "math" element has been set,
	 * otherwise @c false is returned.
	 */
	virtual bool isSetMath() const;


	/**
	 * Sets the "math" element of this DataGenerator.
	 *
	 * @param math; ASTNode* determining the value of the "resultLevel" attribute to be set.
	 *
	 * @return integer value indicating success/failure of the
	 * function.  @if clike The value is drawn from the
	 * enumeration #OperationReturnValues_t. @endif The possible values
	 * returned by this function are:
	 * @li LIBSEDML_OPERATION_SUCCESS
	 * @li LIBSEDML_INVALID_ATTRIBUTE_VALUE
	 */
	virtual int setMath(ASTNode* math);


	/**
	 * Unsets the "math" element of this DataGenerator.
	 *
	 * @return integer value indicating success/failure of the
	 * function.  @if clike The value is drawn from the
	 * enumeration #OperationReturnValues_t. @endif The possible values
	 * returned by this function are:
	 * @li LIBSEDML_OPERATION_SUCCESS
	 * @li LIBSEDML_OPERATION_FAILED
	 */
	virtual int unsetMath();


	/**
	 * Returns the  "SedListOfSedMLVariables" in this DataGenerator object.
	 *
	 * @return the "SedListOfSedMLVariables" attribute of this DataGenerator.
	 */
	const SedListOfSedMLVariables* getListOfSedMLVariables() const;


	/**
	 * Get a SedMLVariable from the SedListOfSedMLVariables.
	 *
	 * @param n the index number of the SedMLVariable to get.
	 *
	 * @return the nth SedMLVariable in the SedListOfSedMLVariables within this DataGenerator.
	 *
	 * @see getNumSedMLVariables()
	 */
	SedMLVariable* getSedMLVariable(unsigned int n);


	/**
	 * Get a SedMLVariable from the SedListOfSedMLVariables.
	 *
	 * @param n the index number of the SedMLVariable to get.
	 *
	 * @return the nth SedMLVariable in the SedListOfSedMLVariables within this DataGenerator.
	 *
	 * @see getNumSedMLVariables()
	 */
	const SedMLVariable* getSedMLVariable(unsigned int n) const;


	/**
	 * Get a SedMLVariable from the SedListOfSedMLVariables
	 * based on its identifier.
	 *
	 * @param sid a string representing the identifier
	 * of the SedMLVariable to get.
	 *
	 * @return the SedMLVariable in the SedListOfSedMLVariables
	 * with the given id or NULL if no such
	 * SedMLVariable exists.
	 *
	 * @see getSedMLVariable(unsigned int n)
	 *
	 * @see getNumSedMLVariables()
	 */
	SedMLVariable* getSedMLVariable(const std::string& sid);


	/**
	 * Get a SedMLVariable from the SedListOfSedMLVariables
	 * based on its identifier.
	 *
	 * @param sid a string representing the identifier
	 * of the SedMLVariable to get.
	 *
	 * @return the SedMLVariable in the SedListOfSedMLVariables
	 * with the given id or NULL if no such
	 * SedMLVariable exists.
	 *
	 * @see getSedMLVariable(unsigned int n)
	 *
	 * @see getNumSedMLVariables()
	 */
	const SedMLVariable* getSedMLVariable(const std::string& sid) const;


	/**
	 * Adds a copy the given "SedMLVariable" to this DataGenerator.
	 *
	 * @param smlv; the SedMLVariable object to add
	 *
	 * @return integer value indicating success/failure of the
	 * function.  @if clike The value is drawn from the
	 * enumeration #OperationReturnValues_t. @endif The possible values
	 * returned by this function are:
	 * @li LIBSEDML_OPERATION_SUCCESS
	 * @li LIBSEDML_INVALID_ATTRIBUTE_VALUE
	 */
	int addSedMLVariable(const SedMLVariable* smlv);


	/**
	 * Get the number of SedMLVariable objects in this DataGenerator.
	 *
	 * @return the number of SedMLVariable objects in this DataGenerator
	 */
	unsigned int getNumSedMLVariables() const;


	/**
	 * Creates a new SedMLVariable object, adds it to this DataGenerators
	 * SedListOfSedMLVariables and returns the SedMLVariable object created. 
	 *
	 * @return a new SedMLVariable object instance
	 *
	 * @see addSedMLVariable(const SedMLVariable* smlv)
	 */
	SedMLVariable* createSedMLVariable();


	/**
	 * Removes the nth SedMLVariable from the SedListOfSedMLVariables within this DataGenerator.
	 * and returns a pointer to it.
	 *
	 * The caller owns the returned item and is responsible for deleting it.
	 *
	 * @param n the index of the SedMLVariable to remove.
	 *
	 * @see getNumSedMLVariables()
	 */
	SedMLVariable* removeSedMLVariable(unsigned int n);


	/**
	 * Removes the SedMLVariable with the given identifier from the SedListOfSedMLVariables within this DataGenerator
	 * and returns a pointer to it.
	 *
	 * The caller owns the returned item and is responsible for deleting it.
	 * If none of the items in this list have the identifier @p sid, then
	 * @c NULL is returned.
	 *
	 * @param sid the identifier of the SedMLVariable to remove.
	 *
	 * @return the SedMLVariable removed. As mentioned above, the caller owns the
	 * returned item.
	 */
	SedMLVariable* removeSedMLVariable(const std::string& sid);


	/**
	 * Returns the  "SedListOfSedMLParameters" in this DataGenerator object.
	 *
	 * @return the "SedListOfSedMLParameters" attribute of this DataGenerator.
	 */
	const SedListOfSedMLParameters* getListOfSedMLParameters() const;


	/**
	 * Get a SedMLParameter from the SedListOfSedMLParameters.
	 *
	 * @param n the index number of the SedMLParameter to get.
	 *
	 * @return the nth SedMLParameter in the SedListOfSedMLParameters within this DataGenerator.
	 *
	 * @see getNumSedMLParameters()
	 */
	SedMLParameter* getSedMLParameter(unsigned int n);


	/**
	 * Get a SedMLParameter from the SedListOfSedMLParameters.
	 *
	 * @param n the index number of the SedMLParameter to get.
	 *
	 * @return the nth SedMLParameter in the SedListOfSedMLParameters within this DataGenerator.
	 *
	 * @see getNumSedMLParameters()
	 */
	const SedMLParameter* getSedMLParameter(unsigned int n) const;


	/**
	 * Get a SedMLParameter from the SedListOfSedMLParameters
	 * based on its identifier.
	 *
	 * @param sid a string representing the identifier
	 * of the SedMLParameter to get.
	 *
	 * @return the SedMLParameter in the SedListOfSedMLParameters
	 * with the given id or NULL if no such
	 * SedMLParameter exists.
	 *
	 * @see getSedMLParameter(unsigned int n)
	 *
	 * @see getNumSedMLParameters()
	 */
	SedMLParameter* getSedMLParameter(const std::string& sid);


	/**
	 * Get a SedMLParameter from the SedListOfSedMLParameters
	 * based on its identifier.
	 *
	 * @param sid a string representing the identifier
	 * of the SedMLParameter to get.
	 *
	 * @return the SedMLParameter in the SedListOfSedMLParameters
	 * with the given id or NULL if no such
	 * SedMLParameter exists.
	 *
	 * @see getSedMLParameter(unsigned int n)
	 *
	 * @see getNumSedMLParameters()
	 */
	const SedMLParameter* getSedMLParameter(const std::string& sid) const;


	/**
	 * Adds a copy the given "SedMLParameter" to this DataGenerator.
	 *
	 * @param smlp; the SedMLParameter object to add
	 *
	 * @return integer value indicating success/failure of the
	 * function.  @if clike The value is drawn from the
	 * enumeration #OperationReturnValues_t. @endif The possible values
	 * returned by this function are:
	 * @li LIBSEDML_OPERATION_SUCCESS
	 * @li LIBSEDML_INVALID_ATTRIBUTE_VALUE
	 */
	int addSedMLParameter(const SedMLParameter* smlp);


	/**
	 * Get the number of SedMLParameter objects in this DataGenerator.
	 *
	 * @return the number of SedMLParameter objects in this DataGenerator
	 */
	unsigned int getNumSedMLParameters() const;


	/**
	 * Creates a new SedMLParameter object, adds it to this DataGenerators
	 * SedListOfSedMLParameters and returns the SedMLParameter object created. 
	 *
	 * @return a new SedMLParameter object instance
	 *
	 * @see addSedMLParameter(const SedMLParameter* smlp)
	 */
	SedMLParameter* createSedMLParameter();


	/**
	 * Removes the nth SedMLParameter from the SedListOfSedMLParameters within this DataGenerator.
	 * and returns a pointer to it.
	 *
	 * The caller owns the returned item and is responsible for deleting it.
	 *
	 * @param n the index of the SedMLParameter to remove.
	 *
	 * @see getNumSedMLParameters()
	 */
	SedMLParameter* removeSedMLParameter(unsigned int n);


	/**
	 * Removes the SedMLParameter with the given identifier from the SedListOfSedMLParameters within this DataGenerator
	 * and returns a pointer to it.
	 *
	 * The caller owns the returned item and is responsible for deleting it.
	 * If none of the items in this list have the identifier @p sid, then
	 * @c NULL is returned.
	 *
	 * @param sid the identifier of the SedMLParameter to remove.
	 *
	 * @return the SedMLParameter removed. As mentioned above, the caller owns the
	 * returned item.
	 */
	SedMLParameter* removeSedMLParameter(const std::string& sid);


	/**
	 * Returns the XML element name of this object, which for DataGenerator, is
	 * always @c "dataGenerator".
	 *
	 * @return the name of this element, i.e. @c "dataGenerator".
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
	 * for this DataGenerator object have been set.
	 *
	 * @note The required attributes for a DataGenerator object are:
	 * @li "id"
	 *
	 * @return a boolean value indicating whether all the required
	 * attributes for this object have been defined.
	 */
	virtual bool hasRequiredAttributes() const;


	/**
	 * Predicate returning @c true if all the required elements
	 * for this DataGenerator object have been set.
	 *
	 * @note The required elements for a DataGenerator object are:
	 *
	 * @return a boolean value indicating whether all the required
	 * elements for this object have been defined.
	 */
	virtual bool hasRequiredElements() const;


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
	 * Accepts the given SedMLVisitor.
	 */
	virtual bool accept (SedMLVisitor& v) const;


/** @endcond doxygen-libsbml-internal */


/** @cond doxygen-libsbml-internal */

	/**
	 * Sets the parent SedMLDocument.
	 */
	virtual void setSedMLDocument (SedMLDocument* d);


/** @endcond doxygen-libsbml-internal */


/** @cond doxygen-libsbml-internal */

	/**
	 * Connects to child elements.
	 */
	virtual void connectToChild ();


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
	 * Subclasses should override this method ro read other XML.
	 *
	 * return true if read from stream, false otherwise.
	 */
	virtual bool readOtherXML (XMLInputStream& stream);


/** @endcond doxygen-libsbml-internal */


/** @cond doxygen-libsbml-internal */

	/**
	 * Write values of XMLAttributes to the output stream.
	 */
	virtual void writeAttributes (XMLOutputStream& stream) const;


/** @endcond doxygen-libsbml-internal */



};

class LIBSEDML_EXTERN SedListOfDataGenerators : public SedListOf
{

public:

	/**
	 * Creates a new SedListOfDataGenerators with the given level, version, and package version.
	 *
	 * @param level an unsigned int, the SEDML Level to assign to this SedListOfDataGenerators
	 *
	 * @param version an unsigned int, the SEDML Version to assign to this SedListOfDataGenerators
	 *
	 * @param pkgVersion an unsigned int, the SEDML SedML Version to assign to this SedListOfDataGenerators
	 */
	SedListOfDataGenerators(unsigned int level      = SEDML_DEFAULT_LEVEL,
	                        unsigned int version    = SEDML_DEFAULT_VERSION
);


	/**
	 * Creates a new SedListOfDataGenerators with the given SedMLNamespaces object.
	 *
	 * @param sedmlns the SedMLNamespaces object
	 */
	SedListOfDataGenerators(SedMLNamespaces* sedmlns);


 	/**
	 * Creates and returns a deep copy of this SedListOfDataGenerators object.
	 *
	 * @return a (deep) copy of this SedListOfDataGenerators object.
	 */
	virtual SedListOfDataGenerators* clone () const;


 	/**
	 * Get a DataGenerator from the SedListOfDataGenerators.
	 *
	 * @param n the index number of the DataGenerator to get.
	 *
	 * @return the nth DataGenerator in this SedListOfDataGenerators.
	 *
	 * @see size()
	 */
	virtual DataGenerator* get(unsigned int n);


	/**
	 * Get a DataGenerator from the SedListOfDataGenerators.
	 *
	 * @param n the index number of the DataGenerator to get.
	 *
	 * @return the nth DataGenerator in this SedListOfDataGenerators.
	 *
	 * @see size()
	 */
	virtual const DataGenerator* get(unsigned int n) const;


	/**
	 * Get a DataGenerator from the SedListOfDataGenerators
	 * based on its identifier.
	 *
	 * @param sid a string representing the identifier
	 * of the DataGenerator to get.
	 *
	 * @return DataGenerator in this SedListOfDataGenerators
	 * with the given id or NULL if no such
	 * DataGenerator exists.
	 *
	 * @see get(unsigned int n)	 *
	 * @see size()
	 */
	virtual DataGenerator* get(const std::string& sid);


	/**
	 * Get a DataGenerator from the SedListOfDataGenerators
	 * based on its identifier.
	 *
	 * @param sid a string representing the identifier
	 * of the DataGenerator to get.
	 *
	 * @return DataGenerator in this SedListOfDataGenerators
	 * with the given id or NULL if no such
	 * DataGenerator exists.
	 *
	 * @see get(unsigned int n)	 *
	 * @see size()
	 */
	virtual const DataGenerator* get(const std::string& sid) const;


	/**
	 * Adds a copy the given "DataGenerator" to this SedListOfDataGenerators.
	 *
	 * @param dg; the DataGenerator object to add
	 *
	 * @return integer value indicating success/failure of the
	 * function.  @if clike The value is drawn from the
	 * enumeration #OperationReturnValues_t. @endif The possible values
	 * returned by this function are:
	 * @li LIBSEDML_OPERATION_SUCCESS
	 * @li LIBSEDML_INVALID_ATTRIBUTE_VALUE
	 */
	int addDataGenerator(const DataGenerator* dg);


	/**
	 * Get the number of DataGenerator objects in this SedListOfDataGenerators.
	 *
	 * @return the number of DataGenerator objects in this SedListOfDataGenerators
	 */
	unsigned int getNumDataGenerators() const;


	/**
	 * Creates a new DataGenerator object, adds it to the
	 * SedListOfDataGenerators and returns the DataGenerator object created. 
	 *
	 * @return a new DataGenerator object instance
	 *
	 * @see addDataGenerator(const DataGenerator* dg)
	 */
	DataGenerator* createDataGenerator();


	/**
	 * Removes the nth DataGenerator from this SedListOfDataGenerators
	 * and returns a pointer to it.
	 *
	 * The caller owns the returned item and is responsible for deleting it.
	 *
	 * @param n the index of the DataGenerator to remove.
	 *
	 * @see size()
	 */
	virtual DataGenerator* remove(unsigned int n);


	/**
	 * Removes the DataGenerator from this SedListOfDataGenerators with the given identifier
	 * and returns a pointer to it.
	 *
	 * The caller owns the returned item and is responsible for deleting it.
	 * If none of the items in this list have the identifier @p sid, then
	 * @c NULL is returned.
	 *
	 * @param sid the identifier of the DataGenerator to remove.
	 *
	 * @return the DataGenerator removed. As mentioned above, the caller owns the
	 * returned item.
	 */
	virtual DataGenerator* remove(const std::string& sid);


	/**
	 * Returns the XML element name of this object, which for SedListOfDataGenerators, is
	 * always @c "sedListOfDataGenerators".
	 *
	 * @return the name of this element, i.e. @c "sedListOfDataGenerators".
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
	 * Returns the libSEDML type code for the SEDML objects
	 * contained in this SedListOf object
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
	 * @return the SEDML type code for the objects in this SedListOf instance, or
	 * @link SEDMLTypeCode_t#SEDML_UNKNOWN SEDML_UNKNOWN@endlink (default).
	 *
	 * @see getElementName()
	 */
	virtual int getItemTypeCode () const;


protected:

	/** @cond doxygen-libsbml-internal */

	/**
	 * Creates a new DataGenerator in this SedListOfDataGenerators
	 */
	virtual SedBase* createObject(XMLInputStream& stream);


	/** @endcond doxygen-libsbml-internal */


	/** @cond doxygen-libsbml-internal */

	/**
	 * Write the namespace for the SedML package.
	 */
	virtual void writeXMLNS(XMLOutputStream& stream) const;


	/** @endcond doxygen-libsbml-internal */



};



LIBSEDML_CPP_NAMESPACE_END

#endif  /*  __cplusplus  */

#ifndef SWIG

LIBSEDML_CPP_NAMESPACE_BEGIN
BEGIN_C_DECLS

LIBSEDML_EXTERN
DataGenerator_t *
DataGenerator_create(unsigned int level, unsigned int version);


LIBSEDML_EXTERN
void
DataGenerator_free(DataGenerator_t * dg);


LIBSEDML_EXTERN
DataGenerator_t *
DataGenerator_clone(DataGenerator_t * dg);


LIBSEDML_EXTERN
char *
DataGenerator_getId(DataGenerator_t * dg);


LIBSEDML_EXTERN
char *
DataGenerator_getName(DataGenerator_t * dg);


LIBSEDML_EXTERN
int
DataGenerator_isSetId(DataGenerator_t * dg);


LIBSEDML_EXTERN
int
DataGenerator_isSetName(DataGenerator_t * dg);


LIBSEDML_EXTERN
int
DataGenerator_setId(DataGenerator_t * dg, const char * id);


LIBSEDML_EXTERN
int
DataGenerator_setName(DataGenerator_t * dg, const char * name);


LIBSEDML_EXTERN
int
DataGenerator_unsetId(DataGenerator_t * dg);


LIBSEDML_EXTERN
int
DataGenerator_unsetName(DataGenerator_t * dg);


LIBSEDML_EXTERN
int
DataGenerator_addSedMLVariable(DataGenerator_t * dg, SedMLVariable_t * smlv);


LIBSEDML_EXTERN
SedMLVariable_t *
DataGenerator_createSedMLVariable(DataGenerator_t * dg);


LIBSEDML_EXTERN
SedListOf_t *
DataGenerator_getSedListOfSedMLVariables(DataGenerator_t * dg);


LIBSEDML_EXTERN
SedMLVariable_t *
DataGenerator_getSedMLVariable(DataGenerator_t * dg, unsigned int n);


LIBSEDML_EXTERN
SedMLVariable_t *
DataGenerator_getSedMLVariableById(DataGenerator_t * dg, const char * sid);


LIBSEDML_EXTERN
unsigned int
DataGenerator_getNumSedMLVariables(DataGenerator_t * dg);


LIBSEDML_EXTERN
SedMLVariable_t *
DataGenerator_removeSedMLVariable(DataGenerator_t * dg, unsigned int n);


LIBSEDML_EXTERN
SedMLVariable_t *
DataGenerator_removeSedMLVariableById(DataGenerator_t * dg, const char * sid);


LIBSEDML_EXTERN
int
DataGenerator_addSedMLParameter(DataGenerator_t * dg, SedMLParameter_t * smlp);


LIBSEDML_EXTERN
SedMLParameter_t *
DataGenerator_createSedMLParameter(DataGenerator_t * dg);


LIBSEDML_EXTERN
SedListOf_t *
DataGenerator_getSedListOfSedMLParameters(DataGenerator_t * dg);


LIBSEDML_EXTERN
SedMLParameter_t *
DataGenerator_getSedMLParameter(DataGenerator_t * dg, unsigned int n);


LIBSEDML_EXTERN
SedMLParameter_t *
DataGenerator_getSedMLParameterById(DataGenerator_t * dg, const char * sid);


LIBSEDML_EXTERN
unsigned int
DataGenerator_getNumSedMLParameters(DataGenerator_t * dg);


LIBSEDML_EXTERN
SedMLParameter_t *
DataGenerator_removeSedMLParameter(DataGenerator_t * dg, unsigned int n);


LIBSEDML_EXTERN
SedMLParameter_t *
DataGenerator_removeSedMLParameterById(DataGenerator_t * dg, const char * sid);


LIBSEDML_EXTERN
int
DataGenerator_hasRequiredAttributes(DataGenerator_t * dg);


LIBSEDML_EXTERN
int
DataGenerator_hasRequiredElements(DataGenerator_t * dg);


LIBSEDML_EXTERN
DataGenerator_t *
SedListOfDataGenerators_getById(SedListOf_t * lo, const char * sid);


LIBSEDML_EXTERN
DataGenerator_t *
SedListOfDataGenerators_removeById(SedListOf_t * lo, const char * sid);




END_C_DECLS
LIBSEDML_CPP_NAMESPACE_END

#endif  /*  !SWIG  */

#endif /*  DataGenerator_H__  */

