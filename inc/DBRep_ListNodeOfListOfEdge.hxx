// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DBRep_ListNodeOfListOfEdge_HeaderFile
#define _DBRep_ListNodeOfListOfEdge_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_DBRep_ListNodeOfListOfEdge.hxx>

#include <Handle_DBRep_Edge.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class DBRep_Edge;
class DBRep_ListOfEdge;
class DBRep_ListIteratorOfListOfEdge;



class DBRep_ListNodeOfListOfEdge : public TCollection_MapNode
{

public:

  
    DBRep_ListNodeOfListOfEdge(const Handle(DBRep_Edge)& I, const TCollection_MapNodePtr& n);
  
      Handle(DBRep_Edge)& Value()  const;




  DEFINE_STANDARD_RTTI(DBRep_ListNodeOfListOfEdge)

protected:




private: 


  Handle(DBRep_Edge) myValue;


};

#define Item Handle(DBRep_Edge)
#define Item_hxx <DBRep_Edge.hxx>
#define TCollection_ListNode DBRep_ListNodeOfListOfEdge
#define TCollection_ListNode_hxx <DBRep_ListNodeOfListOfEdge.hxx>
#define TCollection_ListIterator DBRep_ListIteratorOfListOfEdge
#define TCollection_ListIterator_hxx <DBRep_ListIteratorOfListOfEdge.hxx>
#define Handle_TCollection_ListNode Handle_DBRep_ListNodeOfListOfEdge
#define TCollection_ListNode_Type_() DBRep_ListNodeOfListOfEdge_Type_()
#define TCollection_List DBRep_ListOfEdge
#define TCollection_List_hxx <DBRep_ListOfEdge.hxx>

#include <TCollection_ListNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _DBRep_ListNodeOfListOfEdge_HeaderFile
