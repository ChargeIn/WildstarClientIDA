//----- (00000001406B44C0) ----------------------------------------------------
__int64 __fastcall sub_1406B44C0(_QWORD* a1)
{
	unsigned __int64* v2; // rax
	unsigned __int64 v3; // rdx
	__int64 result; // rax
	unsigned __int64 v5; // rdx
	__int64 v6; // rcx
	double v7; // xmm0_8
	float v8; // [rsp+38h] [rbp+10h] BYREF

	v2 = (unsigned __int64*)sub_140056AB0(a1, 1u);
	if (v2)
		v3 = *v2;
	else
		v3 = 0i64;
	result = sub_140629AF0(qword_140C65898 + 27592, v3);
	if (result)
	{
		v5 = *(_QWORD*)(result + 112);
		v8 = 0.0;
		sub_1401E83A0(&v8, v5);
		v6 = a1[2];
		v7 = v8;
		*(_DWORD*)(v6 + 8) = 3;
		result = 1i64;
		*(double*)v6 = v7;
		a1[2] += 16i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

