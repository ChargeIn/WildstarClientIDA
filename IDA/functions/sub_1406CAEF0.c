//----- (00000001406CAEF0) ----------------------------------------------------
void __fastcall sub_1406CAEF0(_QWORD* a1)
{
	_QWORD* v2; // rbx
	int i; // edi
	unsigned int v4; // edx
	__int64 v5; // rdx

	v2 = a1 + 183;
	*a1 = off_140B709C0;
	for (i = 5; i >= 0; --i)
	{
		v4 = *((_DWORD*)v2 - 1);
		v2 = (_QWORD*)((char*)v2 - 4);
		sub_1401429A0(qword_140C63678, v4);
	}
	sub_1400C4170((__int64)(a1 + 128));
	sub_1400C6030((__int64)a1, v5);
}
// 1406CAF55: variable 'v5' is possibly undefined
// 140B709C0: using guessed type __int64 (__fastcall *off_140B709C0[25])();
// 140C63678: using guessed type __int64 qword_140C63678;

