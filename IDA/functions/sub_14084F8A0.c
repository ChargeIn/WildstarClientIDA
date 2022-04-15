//----- (000000014084F8A0) ----------------------------------------------------
float* __fastcall sub_14084F8A0(__int64* a1, __int128* a2, float a3)
{
	__int64 v3; // rax
	__int64 v4; // r8
	float* v6; // rbx
	float* result; // rax
	__int64 v8; // rax
	__int128 v9; // [rsp+20h] [rbp-28h]

	v3 = *a1;
	v4 = a1[1];
	v9 = *a2;
	if (*a1 != v4)
	{
		do
		{
			if (*(_QWORD*)v3 == (_QWORD)v9 && ((BYTE8(v9) ^ *(_BYTE*)(v3 + 8)) & 1) == 0)
				break;
			v3 += 24i64;
		} while (v3 != v4);
	}
	if (v3 == v4)
	{
		v6 = 0i64;
	}
	else
	{
		v6 = (float*)(v3 + 16);
		if (v3 != -16)
		{
			*v6 = a3;
			return v6;
		}
	}
	v8 = sub_14084CB00((__int64)a1);
	if (!v8)
		return v6;
	result = (float*)(v8 + 16);
	*((_QWORD*)result - 2) = *(_QWORD*)a2;
	*((_QWORD*)result - 1) = *((_QWORD*)a2 + 1);
	*result = a3;
	return result;
}

