#include "../winhttp.h"

//----- (0000000140553890) ----------------------------------------------------
__int64 __fastcall sub_140553890(__int64 a1, unsigned int a2)
{
	__int64 v3; // r14
	unsigned int v4; // eax
	__int64 result; // rax
	int v6; // ecx
	__int64 v7; // rdx
	__int64 v8; // rcx
	_QWORD* v9; // rbx
	unsigned int* v10; // r9
	_QWORD** v11; // r10
	__int64* v12; // rbx
	__int64 v13; // rsi
	int v14; // eax
	int* v15; // rcx
	int v16; // edx
	unsigned int v17; // ebx
	__int64 v18; // r15
	__int64 v19; // rcx
	__int64 v20; // r12
	int v21; // eax
	int v22; // [rsp+40h] [rbp-40h] BYREF
	int v23; // [rsp+44h] [rbp-3Ch]
	unsigned int v24; // [rsp+48h] [rbp-38h]
	__int64 v25; // [rsp+50h] [rbp-30h]
	__int64 v26; // [rsp+58h] [rbp-28h]
	__int64 v27; // [rsp+60h] [rbp-20h] BYREF
	__int64 v28; // [rsp+68h] [rbp-18h]
	int v29; // [rsp+B0h] [rbp+30h] BYREF

	v3 = a2;
	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
	result = sub_14024ACC0(v4);
	if (!result || (*(_BYTE*)(result + 16) & 0x10) == 0)
	{
		if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(a1 + 8)) != 2)
		{
			v6 = v3;
			if ((int)v3 >= 0)
				goto LABEL_9;
			v7 = *(int*)(a1 + 152);
			if ((int)v7 > -1 && *(_QWORD*)(a1 + 8 * v7 + 24))
				v6 = *(_DWORD*)(a1 + 152);
			if (v6 >= 0)
			{
			LABEL_9:
				v8 = *(_QWORD*)(a1 + 8i64 * v6 + 24);
				if (*(_DWORD*)(v8 + 4) == 38)
					return Apollo_LUAEvent(
						*(_QWORD*)(qword_140C65898 + 29504),
						"WorkOrderLocate",
						byte_1409E901C,
						*(unsigned int*)(v8 + 12));
			}
		}
		if (*(_QWORD*)a1)
		{
			v9 = *(_QWORD**)(qword_140C65920 + 8);
			if (v9)
			{
				while (v9[9] != *(_QWORD*)a1)
				{
					v9 = (_QWORD*)v9[4];
					if (!v9)
						goto LABEL_17;
				}
				(*(void(__fastcall**)(_QWORD*))(*v9 + 8i64))(v9);
				(*(void(__fastcall**)(_QWORD*, __int64)) * v9)(v9, 1i64);
			}
		}
	LABEL_17:
		result = qword_140C65898;
		if (qword_140C65898)
		{
			if (*(_QWORD*)(qword_140C65898 + 25744))
			{
				result = sub_1405FC7B0(*(_QWORD*)qword_140C65B80, **(_DWORD**)(a1 + 8));
				v12 = (__int64*)result;
				if (result)
				{
					v13 = 0i64;
					v26 = 0i64;
					v25 = 0i64;
					if ((int)v3 < 0)
					{
						if ((unsigned int)sub_1405FBC40(*v11, *v10) == 2)
						{
							v14 = sub_14054F710(a1);
							v15 = *(int**)(a1 + 8);
							v22 = 1;
							v16 = *v15;
							v17 = v14;
							v24 = v14;
							v23 = v16;
							result = (__int64)sub_140553FD0;
							goto LABEL_38;
						}
						if (qword_140C65898)
						{
							v17 = sub_140553BD0(a1, &v29);
							v23 = v29;
							v24 = v17;
						}
						else
						{
							v17 = 0;
							v23 = v29;
							v24 = 0;
						}
					LABEL_37:
						result = (__int64)sub_140553DA0;
						v22 = 2;
					LABEL_38:
						v26 = result;
						v25 = a1;
						if (!v17)
							return result;
						if (sub_140485FA0(v17, 0))
						{
							result = qword_140C65898;
							v28 = 0i64;
							v27 = 0i64;
							if (*(_DWORD*)qword_140C65920)
							{
								result = sub_140486F10(
									qword_140C65920,
									(__int64)L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
									(__int128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4528i64),
									&v22,
									&v27);
							LABEL_44:
								v13 = result;
							}
						}
						else
						{
							v28 = v26;
							result = v25;
							v27 = v25;
							if (*(_DWORD*)qword_140C65920)
							{
								result = sub_140486DC0(
									qword_140C65920,
									(__int64)L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3",
									&v22,
									&v27,
									v17,
									0);
								goto LABEL_44;
							}
						}
						*(_QWORD*)a1 = v13;
						return result;
					}
					if ((unsigned int)v3 <= *(_DWORD*)(a1 + 16))
					{
						v18 = *(_QWORD*)(a1 + 8 * v3 + 24);
						if (v18)
						{
							result = sub_140550C00(a1, v3);
							if ((_DWORD)result)
							{
								result = *v12;
								if (*v12)
								{
									v19 = *(unsigned int*)(result + 16);
									if ((_DWORD)v3 != (_DWORD)v19 && (unsigned int)v3 <= (unsigned int)v19)
									{
										result = v12[v3 + 2];
										if (result)
										{
											v17 = *(_DWORD*)(result + 56);
											if (!v17)
											{
												v20 = sub_140487750(v19, *(_DWORD*)(v18 + 52), 1);
												if (v20)
												{
													v21 = sub_1405516A0(a1, v3);
													v17 = sub_140487E40(v20, v21, (unsigned int*)(v18 + 24), 4u, 0, 0, 0i64);
												}
											}
											v23 = v3;
											v24 = 0;
											goto LABEL_37;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return result;
}
// 1405539F2: variable 'v11' is possibly undefined
// 1405539EF: variable 'v10' is possibly undefined
// 1409E901C: using guessed type _BYTE byte_1409E901C[16];
// 140B1E410: using guessed type wchar_t aArtFxModelProp_9[72];
// 140B1E530: using guessed type wchar_t aArtFxModelProp_10[66];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C65B80: using guessed type __int64 qword_140C65B80;

