//----- (00000001400F0EE0) ----------------------------------------------------
__int64* __fastcall sub_1400F0EE0(__int64 a1, __int64 a2, int a3, _QWORD* a4)
{
	__int64* v4; // rbx
	__int64* result; // rax
	int v6; // ecx
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+28h] [rbp-10h]
	__int64 v9; // [rsp+58h] [rbp+20h] BYREF

	*a4 += 8i64;
	v4 = *(__int64**)(*a4 - 8i64);
	result = (__int64*)sub_1400580E0(a2, a3);
	v6 = *((_DWORD*)result + 2);
	if (v6 == 3)
		goto LABEL_5;
	if (v6 == 4)
	{
		result = (__int64*)sub_14005AC80((char*)(*result + 32), (unsigned __int64*)&v9);
		if ((_DWORD)result)
		{
			v8 = 3;
			result = &v7;
			v7 = v9;
		LABEL_5:
			*v4 = *result;
			return result;
		}
	}
	*v4 = 0i64;
	return result;
}

