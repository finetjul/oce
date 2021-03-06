// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FairCurve_Energy_HeaderFile
#define _FairCurve_Energy_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_TColgp_HArray1OfPnt2d.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <TColgp_Array1OfXY.hxx>
#include <math_Vector.hxx>
#include <math_MultipleVarFunctionWithHessian.hxx>
#include <Standard_Real.hxx>
class TColgp_HArray1OfPnt2d;
class math_Matrix;
class gp_Pnt2d;


//! necessary methodes to compute the energy of an FairCurve.
class FairCurve_Energy  : public math_MultipleVarFunctionWithHessian
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! returns the number of variables of the energy.
    virtual   Standard_Integer NbVariables()  const;
  
  //! computes the values of the Energys E for the
  //! variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Value (const math_Vector& X, Standard_Real& E) ;
  
  //! computes the gradient <G> of the energys for the
  //! variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Gradient (const math_Vector& X, math_Vector& G) ;
  
  //! computes the Energy <E> and the gradient <G> of the
  //! energy for the variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Values (const math_Vector& X, Standard_Real& E, math_Vector& G) ;
  
  //! computes the Energy  <E>, the gradient <G> and the
  //! Hessian   <H> of  the  energy  for  the   variable <X>.
  //! Returns   True  if    the  computation   was  done
  //! successfully, False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Values (const math_Vector& X, Standard_Real& E, math_Vector& G, math_Matrix& H) ;
  
  //! compute the variables <X> wich correspond with the field <MyPoles>
  Standard_EXPORT virtual   Standard_Boolean Variable (math_Vector& X)  const;
  
  //! return  the  poles
     const  Handle(TColgp_HArray1OfPnt2d)& Poles()  const;




protected:

  
  //! Angles corresspond to the Ox axis
  //! ConstrOrder1(2) can be equal to 0, 1 or 2
  Standard_EXPORT FairCurve_Energy(const Handle(TColgp_HArray1OfPnt2d)& Poles, const Standard_Integer ConstrOrder1, const Standard_Integer ConstrOrder2, const Standard_Boolean WithAuxValue = Standard_False, const Standard_Real Angle1 = 0, const Standard_Real Angle2 = 0, const Standard_Integer Degree = 2, const Standard_Real Curvature1 = 0, const Standard_Real Curvature2 = 0);
  
  //! It is use internaly to make the Gradient Vector <G>
  Standard_EXPORT   void Gradient1 (const math_Vector& TheVector, math_Vector& G) ;
  
  //! It is use internaly to make the Hessian Matrix <H>
  Standard_EXPORT   void Hessian1 (const math_Vector& TheVector, math_Matrix& H) ;
  
  //! compute  the  poles wich correspond with the variable X
  Standard_EXPORT virtual   void ComputePoles (const math_Vector& X) ;
  
      Standard_Integer Indice (const Standard_Integer i, const Standard_Integer j)  const;
  
  //! compute  the  pole wich depend of variables and G1 constraint
  Standard_EXPORT   void ComputePolesG1 (const Standard_Integer Side, const Standard_Real Lambda, const gp_Pnt2d& P1, gp_Pnt2d& P2)  const;
  
  //! compute  the  pole wich depend of variables and G2 constraint
  Standard_EXPORT   void ComputePolesG2 (const Standard_Integer Side, const Standard_Real Lambda, const Standard_Real Rho, const gp_Pnt2d& P1, gp_Pnt2d& P2)  const;
  
  //! compute the energy (and derivatives) in intermediat format
  Standard_EXPORT virtual   Standard_Boolean Compute (const Standard_Integer DerivativeOrder, math_Vector& Result)  = 0;


  Handle(TColgp_HArray1OfPnt2d) MyPoles;
  Standard_Integer MyContrOrder1;
  Standard_Integer MyContrOrder2;
  Standard_Boolean MyWithAuxValue;
  Standard_Integer MyNbVar;


private:



  Standard_Integer MyNbValues;
  TColgp_Array1OfXY MyLinearForm;
  TColgp_Array1OfXY MyQuadForm;
  math_Vector MyGradient;
  math_Vector MyHessian;


};


#include <FairCurve_Energy.lxx>





#endif // _FairCurve_Energy_HeaderFile
