//----- (00000001408563B0) ----------------------------------------------------
__int64 __fastcall sub_1408563B0(__int64 a1, __int64* a2, _DWORD* a3, unsigned __int64* a4)
{
	__int64 result; // rax
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+28h] [rbp-10h]

	if (*(_QWORD*)(a1 + 24))
	{
		*a3 = *(_DWORD*)(a1 + 12);
		result = *(_QWORD*)(a1 + 24);
		*a2 = result;
	}
	else
	{
		sub_14083ED20((struct _RTL_CRITICAL_SECTION*)qword_140C61B58, (__int64)&v7, *(_DWORD*)a1, a4);
		*a3 = v8;
		result = v7;
		*a2 = v7;
	}
	return result;
}
// 140C61B58: using guessed type __int64 qword_140C61B58;

