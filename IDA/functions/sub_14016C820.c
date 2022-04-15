//----- (000000014016C820) ----------------------------------------------------
bool __fastcall sub_14016C820(__int64 a1)
{
	_QWORD** v1; // rdx
	_QWORD* v2; // rcx
	int i; // r8d

	v1 = *(_QWORD***)(a1 + 96);
	v2 = *v1;
	for (i = 0; v2 != v1; ++i)
		v2 = (_QWORD*)*v2;
	return i > 0;
}

