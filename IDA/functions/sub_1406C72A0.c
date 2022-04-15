//----- (00000001406C72A0) ----------------------------------------------------
__int64 __fastcall sub_1406C72A0(__int64 a1)
{
	__int64 result; // rax
	_QWORD* v3; // rcx
	int v4; // xmm0_4
	__int128 v5; // [rsp+30h] [rbp-38h] BYREF
	__m128 v6[2]; // [rsp+40h] [rbp-28h] BYREF

	sub_1406C5D70(a1, v6);
	result = *(_QWORD*)(a1 + 32);
	if (*(_QWORD*)(result + 3392) == a1)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		result = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)a1 + 352i64))(a1, &qword_140C77760);
		v5 = xmmword_140B7B240;
		if ((_DWORD)result == 2)
		{
			v3 = *(_QWORD**)(a1 + 2280);
			if (!v3)
				return result;
			*(float*)&v4 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2288)) * *(float*)(a1 + 2292);
		}
		else
		{
			v3 = *(_QWORD**)(a1 + 2328);
			if (!v3)
				return result;
			*(float*)&v4 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2336)) * *(float*)(a1 + 2340);
		}
		return sub_140103E60(v3, v6, (__m128*) & v5, 0, v4);
	}
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C77760: using guessed type __int64 qword_140C77760;
// 1406C72A0: using guessed type __m128 var_28[2];

