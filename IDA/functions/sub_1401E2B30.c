//----- (00000001401E2B30) ----------------------------------------------------
void __fastcall sub_1401E2B30(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v5; // r12
	__int64 v6; // r9
	_QWORD** v7; // rcx
	_QWORD* v8; // rax
	__int64 i; // rdx
	unsigned __int64 v10; // rsi
	__int64* v11; // rbx
	unsigned __int64 v12; // r14
	int v13; // edx
	__int64 v14; // rcx
	int v15; // xmm6_4
	int* v16; // rax
	__int64 v17; // r9
	int v18; // edi
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-D0h] BYREF
	__int64 v20; // [rsp+38h] [rbp-C8h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-C0h]
	char v22[8]; // [rsp+48h] [rbp-B8h] BYREF
	int* v23; // [rsp+50h] [rbp-B0h]
	__int64 v24; // [rsp+58h] [rbp-A8h]
	int* v25; // [rsp+68h] [rbp-98h] BYREF
	__int64 v26[4]; // [rsp+70h] [rbp-90h] BYREF
	int v27[4]; // [rsp+90h] [rbp-70h] BYREF
	__int64 v28; // [rsp+A0h] [rbp-60h]
	int v29; // [rsp+A8h] [rbp-58h]
	__int128 v30; // [rsp+B0h] [rbp-50h]
	__int64 v31; // [rsp+C0h] [rbp-40h]
	int v32; // [rsp+C8h] [rbp-38h]
	__int128 v33; // [rsp+D0h] [rbp-30h]
	__int64 v34; // [rsp+100h] [rbp+0h]
	int v35; // [rsp+108h] [rbp+8h]
	__int64 v37; // [rsp+188h] [rbp+88h] BYREF

	v5 = a1;
	if ((*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 25i64))
	{
		v6 = *(_QWORD*)(a2 + 8);
		if (((*(_QWORD*)(a2 + 16) - v6) & 0xFFFFFFFFFFFFFFFCui64) != 0)
		{
			v7 = *(_QWORD***)(a3 + 8);
			v8 = *v7;
			for (i = 0i64; v8 != v7; ++i)
				v8 = (_QWORD*)*v8;
			if ((*(_QWORD*)(a2 + 16) - v6) >> 2 == i)
			{
				v24 = 0i64;
				v10 = 0i64;
				v23 = sub_14018B280(112i64, 0);
				*(_BYTE*)v23 = 0;
				*((_QWORD*)v23 + 1) = 0i64;
				*((_QWORD*)v23 + 2) = v23;
				*((_QWORD*)v23 + 3) = v23;
				v11 = **(__int64***)(a3 + 8);
				v12 = (__int64)(*(_QWORD*)(a2 + 16) - *(_QWORD*)(a2 + 8)) >> 2;
				if (v12)
				{
					do
					{
						v13 = *((_DWORD*)v11 + 4);
						v14 = *((_QWORD*)v23 + 1);
						v15 = *(_DWORD*)(*(_QWORD*)(a2 + 8) + 4 * v10);
						v16 = v23;
						while (v14)
						{
							if (*(_DWORD*)(v14 + 32) < v13)
							{
								v14 = *(_QWORD*)(v14 + 24);
							}
							else
							{
								v16 = (int*)v14;
								v14 = *(_QWORD*)(v14 + 16);
							}
						}
						if (v16 == v23 || v13 < v16[8])
						{
							v27[0] = *((_DWORD*)v11 + 4);
							v31 = 0i64;
							v30 = 0i64;
							v33 = 0i64;
							v32 = 0;
							v34 = 0i64;
							v35 = 0;
							v28 = 0i64;
							v29 = 0;
							v37 = (__int64)v16;
							sub_1401E4570((__int64)v22, &v25, &v37, v27);
							v16 = v25;
						}
						switch (*((_DWORD*)v11 + 6))
						{
						case 0:
							v16[16] = v15;
							v16[12] = 1;
							break;
						case 1:
							v16[17] = v15;
							v16[12] = 1;
							break;
						case 2:
							v16[18] = v15;
							v16[12] = 1;
							break;
						case 3:
							v16[21] = v15;
							v16[13] = 1;
							break;
						case 4:
							v16[20] = v15;
							v16[13] = 1;
							break;
						case 5:
							v16[22] = v15;
							v16[13] = 1;
							break;
						case 6:
							v16[24] = v15;
							v16[14] = 1;
							break;
						case 7:
							v16[25] = v15;
							v16[14] = 1;
							break;
						case 8:
							v16[26] = v15;
							v16[14] = 1;
							break;
						default:
							TlsValue = &off_140B5E648;
							v20 = 0i64;
							lpTlsValue = TlsGetValue(dwTlsIndex);
							TlsSetValue(dwTlsIndex, &TlsValue);
							v17 = *((unsigned int*)v11 + 6);
							v26[0] = (__int64)TlsValue;
							v26[1] = v20;
							v26[2] = (__int64)lpTlsValue;
							v37 = 0x141D45610i64;
							v18 = sub_1401971E0(&dword_140C8A284, 5, &v37, v17, v26);
							TlsValue = &off_140B5E648;
							TlsSetValue(dwTlsIndex, lpTlsValue);
							if (v18)
								DebugBreak();
							break;
						}
						v11 = (__int64*)*v11;
						++v10;
					} while (v10 < v12);
					v5 = a1;
				}
				(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)v5 + 304i64))(v5, v22);
				sub_140008410((__int64)v22);
				sub_14018B900((__int64)v23, 0);
			}
		}
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A284: using guessed type _DWORD dword_140C8A284;
// 1401E2B30: using guessed type int var_D0[4];
// 1401E2B30: using guessed type char var_118[8];

