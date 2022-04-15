//----- (00000001408614B0) ----------------------------------------------------
__int64 __fastcall sub_1408614B0(__int64* a1, int a2)
{
	__int64 v2; // rax

	v2 = a1[3];
	if ((*(_DWORD*)(v2 + 8) & 0x10000) != 0)
		sub_140845530(qword_140C61B60, *(_DWORD*)(v2 + 120), (__int64)a1);
	sub_14085E170(a1[3], a2);
	return (*(__int64(__fastcall**)(__int64*))(*a1 + 72))(a1);
}
// 140C61B60: using guessed type __int64 qword_140C61B60;

