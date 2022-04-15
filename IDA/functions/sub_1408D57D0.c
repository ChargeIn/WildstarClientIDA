//----- (00000001408D57D0) ----------------------------------------------------
__int64 __fastcall sub_1408D57D0(__int64 a1, __int64 a2)
{
	int* v3; // rdx
	__int64 result; // rax
	int v5[10]; // [rsp+20h] [rbp-28h] BYREF

	sub_1408D55C0(a1, a2);
	v3 = *(int**)(a1 + 8);
	v5[0] = *v3;
	v5[1] = v3[1];
	v5[2] = v3[2];
	v5[3] = v3[3];
	v5[4] = v3[4];
	result = (unsigned int)(int)(sub_1408D9A30((__int64)v5) * 6.91);
	*(_DWORD*)(a1 + 16) = result;
	return result;
}

