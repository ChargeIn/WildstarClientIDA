#include "../winhttp.h"

//----- (000000014082A960) ----------------------------------------------------
unsigned __int8* __fastcall sub_14082A960(unsigned __int8** a1, unsigned int a2, unsigned int a3, char a4, char a5)
{
	unsigned __int8* result; // rax
	unsigned __int8* v6; // r10
	unsigned int v8; // ebp
	__int64 v10; // r14
	int v11; // esi
	unsigned __int8* v12; // rcx
	__int64 v13; // rbx
	__int64* v14; // r13
	unsigned __int8 v15; // bp
	char* v16; // r15
	unsigned __int8* v17; // r8
	unsigned int v18; // r9d
	int v19; // ecx
	__int64 v20; // rdx
	unsigned __int8* v21; // rdi
	unsigned __int8* v22; // r8
	unsigned int v23; // r9d
	__int64 v24; // rcx
	__int64 v25; // rdx
	float v26; // xmm6_4
	__int64* v27; // rdx
	float* v28; // rdx
	float v29; // xmm0_4
	char v30; // al
	__int64 v31; // rsi
	char v32; // di
	__int64 v33; // r8
	__int64 v34; // r9
	int v35; // [rsp+40h] [rbp-88h]
	__int64 v36; // [rsp+48h] [rbp-80h] BYREF
	__int64 v37; // [rsp+50h] [rbp-78h]
	__int64 v38[2]; // [rsp+58h] [rbp-70h] BYREF
	float v39; // [rsp+68h] [rbp-60h]
	float v40; // [rsp+6Ch] [rbp-5Ch]
	int v41; // [rsp+70h] [rbp-58h]
	int v42; // [rsp+74h] [rbp-54h]
	char v43; // [rsp+78h] [rbp-50h]
	char v44; // [rsp+79h] [rbp-4Fh]
	char v45; // [rsp+D0h] [rbp+8h]

	result = *a1;
	v6 = a1[1];
	v8 = a3;
	if (*a1 != v6)
	{
		do
		{
			if (*(_DWORD*)result == a2)
				break;
			result += 16;
		} while (result != v6);
		if (result != v6)
		{
			result += 8;
			if (result)
			{
				v10 = *(_QWORD*)result;
				v37 = *(_QWORD*)result;
				if (a5
					|| (sub_14082B250((__int64)a1, a2, *(_DWORD*)(v10 + 4), a3),
						(result = (unsigned __int8*)qword_140C61B38) == 0i64)
					|| a4
					|| (result = (unsigned __int8*)qword_140C61B38(a2, v8), !(_BYTE)result))
				{
					v11 = 0;
					v35 = 0;
					if (!a4)
					{
						result = *(unsigned __int8**)(v10 + 16);
						v12 = *(unsigned __int8**)(v10 + 24);
						if (result == v12)
							goto LABEL_18;
						do
						{
							if (*(_DWORD*)result == *(_DWORD*)(v10 + 4) && *((_DWORD*)result + 1) == v8)
								break;
							result += 12;
						} while (result != v12);
						if (result == v12 || (result += 8) == 0i64)
							LABEL_18:
						v11 = *(_DWORD*)v10;
						else
							v11 = *(_DWORD*)result;
						v35 = v11;
					}
					v13 = *(_QWORD*)(v10 + 8);
					if (v13)
					{
						v36 = 0i64;
						while (1)
						{
							v45 = 0;
							*(_DWORD*)(v13 + 68) = v8;
							result = (unsigned __int8*)sub_140852EA0(v13, v8);
							v14 = (__int64*)(result + 32);
							if (!result)
								v14 = &v36;
							v15 = 0;
							v16 = (char*)&unk_1409A35E8;
							do
							{
								v17 = *(unsigned __int8**)(v13 + 32);
								if (v17)
								{
									v18 = *v17;
									v19 = 0;
									while (1)
									{
										v20 = (unsigned int)(v19 + 1);
										if (v17[v20] == v15)
											break;
										++v19;
										if ((unsigned int)v20 >= v18)
											goto LABEL_29;
									}
									result = &v17[(v18 + 4) & 0xFFFFFFFC];
									v21 = &result[16 * v19];
								}
								else
								{
								LABEL_29:
									v21 = 0i64;
								}
								v22 = (unsigned __int8*)*v14;
								if (!*v14)
									goto LABEL_34;
								v23 = *v22;
								v24 = 0i64;
								while (1)
								{
									v25 = (unsigned int)(v24 + 1);
									if (v22[v25] == v15)
										break;
									v24 = (unsigned int)v25;
									if ((unsigned int)v25 >= v23)
										goto LABEL_34;
								}
								result = &v22[(v23 + 4) & 0xFFFFFFFC];
								v28 = (float*)&result[4 * v24];
								if (v28)
									v26 = *v28;
								else
									LABEL_34:
								v26 = 0.0;
								if (v21)
								{
									v27 = (__int64*)*((_QWORD*)v21 + 1);
									if (v27)
									{
										result = (unsigned __int8*)sub_14083AB80(qword_140C61B70, v27, v15, v26, v11, 4, 0);
										goto LABEL_48;
									}
									v29 = *(float*)v21;
								}
								else
								{
									v29 = 0.0;
								}
								if (v29 == v26)
									goto LABEL_48;
								v30 = *v16;
								v39 = v29;
								v40 = v26;
								v38[0] = v13;
								v43 = v30;
								v38[1] = v15;
								v41 = v11;
								v42 = 4;
								v44 = 1;
								result = (unsigned __int8*)sub_14083A960((_DWORD*)qword_140C61B70, (__int64)v38, 1, 1);
								v31 = (__int64)result;
								if (!v21)
								{
									result = (unsigned __int8*)sub_140829BE0((__int64*)(v13 + 32), v15);
									v21 = result;
									if (!result)
									{
										if (v31)
											goto LABEL_47;
										goto LABEL_48;
									}
								}
								*((_QWORD*)v21 + 1) = v31;
								if (v31)
								{
									result = (unsigned __int8*)(*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v13 + 24)
										+ 304i64))(
											*(_QWORD*)(v13 + 24),
											3i64);
									if (!(_BYTE)result)
									{
										LOBYTE(v34) = 1;
										(**(void(__fastcall***)(__int64, _QWORD, __int64, __int64))v13)(v13, v15, v33, v34);
									LABEL_47:
										result = (unsigned __int8*)sub_14083B060(qword_140C61B70, v31, v13);
									}
								LABEL_48:
									v32 = v45;
									goto LABEL_49;
								}
								*(float*)v21 = v26;
								v32 = 1;
								v45 = 1;
							LABEL_49:
								v11 = v35;
								++v15;
								++v16;
							} while (v15 < 5u);
							if (v32)
								result = (unsigned __int8*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v13 + 24) + 408i64))(*(_QWORD*)(v13 + 24));
							v13 = *(_QWORD*)(v13 + 8);
							v8 = a3;
							if (!v13)
							{
								v10 = v37;
								break;
							}
						}
					}
					*(_DWORD*)(v10 + 4) = v8;
				}
			}
		}
	}
	return result;
}
// 140C61B38: invalid function type has been ignored
// 14082ACB7: variable 'v33' is possibly undefined
// 14082ACB7: variable 'v34' is possibly undefined
// 140C61B38: using guessed type __int64 (__fastcall *qword_140C61B38)(_QWORD, _QWORD);
// 140C61B70: using guessed type __int64 qword_140C61B70;

