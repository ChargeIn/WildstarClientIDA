//----- (00000001401D0AE0) ----------------------------------------------------
__int64 __fastcall sub_1401D0AE0(__int64 a1, int* a2, __int64* a3)
{
	__int64 v3; // r14
	__int64* v7; // r14
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 32);
	sub_1401D1A10((__int64*)(a1 + 24), v3 + 1);
	v7 = (__int64*)(*(_QWORD*)(a1 + 24) + 56 * v3);
	*v7 = sub_1401D15D0(a1, a2);
	v7[1] = *a3;
	v7[2] = a3[1];
	v7[3] = a3[2];
	v7[4] = a3[3];
	v7[5] = a3[4];
	result = a3[5];
	v7[6] = result;
	return result;
}

