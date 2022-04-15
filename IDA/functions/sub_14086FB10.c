//----- (000000014086FB10) ----------------------------------------------------
_DWORD* __fastcall sub_14086FB10(_QWORD* a1, int a2, float a3)
{
	_DWORD* result; // rax
	_DWORD* v4; // r8
	_DWORD* v5; // rdi
	__int64 v6; // rbx
	float v7; // xmm0_4
	__int64 i; // rbx
	int v9; // [rsp+20h] [rbp-48h] BYREF
	__int64 v10; // [rsp+28h] [rbp-40h]
	char v11; // [rsp+30h] [rbp-38h]
	__int64 v12; // [rsp+38h] [rbp-30h]
	float v13; // [rsp+40h] [rbp-28h]

	result = (_DWORD*)a1[21];
	v4 = (_DWORD*)a1[22];
	if (result != v4)
	{
		do
		{
			if (*result == a2)
				break;
			result += 4;
		} while (result != v4);
		if (result != v4)
		{
			v5 = result + 2;
			if (result != (_DWORD*)-8i64)
			{
				v6 = a1[7];
				v9 = 0;
				v11 = 0;
				v10 = 0i64;
				v7 = a3 - *(float*)(*(_QWORD*)v5 + 44i64);
				v12 = 0i64;
				v13 = v7;
				if (v6)
				{
					for (i = *(_QWORD*)(v6 + 24); i; i = *(_QWORD*)(i + 32))
					{
						if (*(_QWORD*)(i + 168) == *(_QWORD*)v5)
							sub_14085F530(i, (float*)&v9);
					}
				}
				result = *(_DWORD**)v5;
				*(float*)(*(_QWORD*)v5 + 44i64) = a3;
			}
		}
	}
	return result;
}

