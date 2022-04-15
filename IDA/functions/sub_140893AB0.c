//----- (0000000140893AB0) ----------------------------------------------------
__int64 __fastcall sub_140893AB0(__int64 a1)
{
	__int64 result; // rax
	int* v3; // rax
	int v4; // ebp
	unsigned __int8* v5; // rax
	int v6; // r14d
	__int64 v7; // rsi
	_DWORD* v8; // rbx
	__int64 v9; // r8
	_DWORD* v10; // rcx
	_DWORD* v11; // rax
	_DWORD* v12; // [rsp+20h] [rbp-38h] BYREF
	_DWORD* v13; // [rsp+28h] [rbp-30h]
	int v14; // [rsp+30h] [rbp-28h]

	if (!(_BYTE)qword_140C61B20 || *(_DWORD*)(a1 + 272) != 1)
		return sub_140891520((_QWORD*)a1);
	result = *(unsigned int*)(a1 + 264);
	if ((_DWORD)result)
	{
		result = (unsigned int)(result - 1);
		*(_DWORD*)(a1 + 264) = result;
		if (!(_DWORD)result)
		{
			v3 = *(int**)(a1 + 304);
			if (v3)
				v4 = *v3;
			else
				v4 = 0;
			v5 = *(unsigned __int8**)(a1 + 312);
			if (v5)
				v6 = *v5;
			else
				v6 = 0;
			v7 = sub_14087BB10(a1 + 248, v4, v6);
			if (v7)
			{
				v12 = 0i64;
				v13 = 0i64;
				v14 = 0;
				sub_140834890(a1 + 272, (__int64)&v12);
				v8 = v12;
				v9 = (__int64)v13;
				if (v12 != v13)
				{
					do
					{
						if (!*v8)
							goto LABEL_18;
						v10 = *(_DWORD**)(v7 + 8);
						v11 = *(_DWORD**)v7;
						if (*(_DWORD**)v7 != v10)
						{
							do
							{
								if (*v11 == *v8)
									break;
								++v11;
							} while (v11 != v10);
							if (v11 != v10)
							{
							LABEL_18:
								sub_1408552B0(v8[1]);
								v9 = (__int64)v13;
							}
						}
						v8 += 2;
					} while (v8 != (_DWORD*)v9);
					v8 = v12;
				}
				if (v8)
				{
					v13 = v8;
					sub_140881720(dword_140C10F20, (__int64)v8);
				}
			}
			sub_14087BBA0(a1 + 248, v4, v6);
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 688i64))(a1);
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B20: using guessed type __int64 qword_140C61B20;

