#include "_Cell.h"


int _Cell::getRow()
{
	return _row;
}
int _Cell::getColumn()
{
	return _column;
}
int _Cell::getOwned()
{
	return _owned;
}
void _Cell::setRow(int pRow)
{
	_row = pRow;
}
void _Cell::setColumn(int pColumn)
{
	_column = pColumn;
}
bool _Cell::setOwned(int pOwned)
{
	if (pOwned == -1 || pOwned == 1 || pOwned == 0)
	{
		_owned = pOwned;
		return true;
	}
	return false;
}
_Cell::_Cell()
{
	_row = 0;
	_column = 0;
	_owned = 0;
}
_Cell::_Cell(int Row, int Column)
{
	_row = Row;
	_column = Column;
	_owned = 0;
}

_Cell::~_Cell()
{
}
