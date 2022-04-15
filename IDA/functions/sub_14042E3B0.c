//----- (000000014042E3B0) ----------------------------------------------------
__int64 __fastcall sub_14042E3B0(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned int v2; // eax

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v2 = 0;
	else
		v2 = sub_140056D60(a1, 1u);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ShowQuestLog", byte_1409E90BC, v2);
	return 0i64;
}
// 1409E90BC: using guessed type _BYTE byte_1409E90BC[256];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

