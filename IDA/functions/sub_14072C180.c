//----- (000000014072C180) ----------------------------------------------------
__int64 __fastcall sub_14072C180(_QWORD* a1, int a2)
{
	_QWORD* v2; // rbx
	__int64 result; // rax
	float v4; // xmm6_4
	float v7; // xmm0_4
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	float v11; // [rsp+58h] [rbp+10h] BYREF

	v2 = (_QWORD*)a1[151];
	a1[152] = a1[153];
	result = a1[178];
	v4 = 3.4028235e38;
	a1[153] = 0i64;
	if (!*(_QWORD*)(result + 2896) && v2)
	{
		do
		{
			result = (*(__int64(__fastcall**)(_QWORD*, _QWORD*, _QWORD*, float*))(*v2 + 32i64))(
				v2,
				a1 + 162,
				a1 + 164,
				&v11);
			if ((_DWORD)result)
			{
				v7 = v11;
				if (v11 < v4)
				{
					a1[153] = v2;
					v4 = v7;
				}
			}
			v2 = (_QWORD*)v2[2];
		} while (v2);
	}
	if (a2 || (v8 = a1[153], v8 != a1[152]))
	{
		v9 = a1[152];
		if (v9)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 56i64))(v9);
		v10 = a1[153];
		if (v10)
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 40i64))(v10);
	}
	else if (v8)
	{
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 48i64))(v8);
	}
	return result;
}

