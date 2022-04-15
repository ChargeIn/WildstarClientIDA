//----- (000000014082BD00) ----------------------------------------------------
__int64 __fastcall sub_14082BD00(__int64 a1)
{
	unsigned int v2; // ebx
	unsigned int v3; // eax
	__int64 result; // rax
	__int64 v5; // rax
	unsigned int v6; // ebx
	_QWORD* v7; // rcx
	unsigned int v8; // edx
	_QWORD* v9; // rax
	__int64 v10; // rax
	_QWORD* v11; // rcx
	unsigned int v12; // edx
	_QWORD* v13; // rax

	*(_QWORD*)(a1 + 196) = 0i64;
	v2 = qword_140C61B18;
	v3 = sub_140829790();
	result = sub_140829860(a1 + 40, v2 / v3);
	if ((_DWORD)result == 1)
	{
		*(_DWORD*)(a1 + 128) = 0;
		*(_DWORD*)(a1 + 124) = -1;
		*(_QWORD*)(a1 + 112) = 0i64;
		v5 = sub_1408819F0(dword_140C10F20, 768i64);
		v6 = 52;
		v7 = (_QWORD*)v5;
		*(_QWORD*)(a1 + 136) = v5;
		if (v5)
		{
			*(_DWORD*)(a1 + 120) = 32;
			*(_QWORD*)(a1 + 112) = v5;
			v8 = 0;
			do
			{
				v9 = v7 + 3;
				++v8;
				*v7 = v7 + 3;
				v7 += 3;
			} while (v8 < *(_DWORD*)(a1 + 120));
			*(v9 - 3) = 0i64;
			result = 1i64;
		}
		else
		{
			result = 52i64;
		}
		*(_QWORD*)(a1 + 96) = 0i64;
		*(_QWORD*)(a1 + 104) = 0i64;
		if ((_DWORD)result == 1)
		{
			*(_DWORD*)(a1 + 176) = 0;
			*(_DWORD*)(a1 + 172) = -1;
			*(_QWORD*)(a1 + 160) = 0i64;
			v10 = sub_1408819F0(dword_140C10F20, 768i64);
			v11 = (_QWORD*)v10;
			*(_QWORD*)(a1 + 184) = v10;
			if (v10)
			{
				*(_DWORD*)(a1 + 168) = 32;
				*(_QWORD*)(a1 + 160) = v10;
				v12 = 0;
				do
				{
					v13 = v11 + 3;
					++v12;
					*v11 = v11 + 3;
					v11 += 3;
				} while (v12 < *(_DWORD*)(a1 + 168));
				*(v13 - 3) = 0i64;
				v6 = 1;
			}
			*(_QWORD*)(a1 + 144) = 0i64;
			*(_QWORD*)(a1 + 152) = 0i64;
			return v6;
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B18: using guessed type __int64 qword_140C61B18;

