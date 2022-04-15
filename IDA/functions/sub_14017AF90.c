//----- (000000014017AF90) ----------------------------------------------------
__int64 __fastcall sub_14017AF90(_QWORD* a1)
{
	int v1; // edi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // rax
	__int64 result; // rax
	bool v7; // zf
	_DWORD* v8; // rcx

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v5) + 400i64) == a1)
				break;
			v5 = ++v4;
		} while (v4 < v3);
	}
	result = sub_14017AB00(a1, 1u);
	if (result)
	{
		v7 = *(_BYTE*)(result + 1124) == 0;
		v8 = (_DWORD*)a1[2];
		result = 1i64;
		LOBYTE(v1) = !v7;
		v8[2] = 1;
		*v8 = v1;
		a1[2] += 16i64;
	}
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;

