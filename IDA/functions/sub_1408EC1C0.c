//----- (00000001408EC1C0) ----------------------------------------------------
__int64 __fastcall sub_1408EC1C0(__int64 a1, int a2)
{
	__int64 result; // rax
	int v5; // r9d

	result = sub_1408EC120((int*)a1, a2);
	v5 = a2 + *(_DWORD*)a1;
	*(_DWORD*)a1 = v5 & 7;
	*(_DWORD*)(a1 + 16) -= v5 >> 3;
	*(_QWORD*)(a1 + 8) += (__int64)v5 >> 3;
	return result;
}

