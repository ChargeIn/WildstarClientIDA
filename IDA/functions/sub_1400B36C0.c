//----- (00000001400B36C0) ----------------------------------------------------
void** __fastcall sub_1400B36C0(_QWORD* a1, __int64 a2)
{
	void** result; // rax
	_DWORD* StackBase; // rax
	int v6; // ecx
	int v7; // eax
	__int64 v8; // rdx
	unsigned int v9; // ebx
	__int64 v10; // rdx
	unsigned int v11; // ebx
	_QWORD* v12; // rbx
	__int64(__fastcall * **v13)(_QWORD, __int64); // r14
	unsigned int CurrentThreadId; // eax
	_QWORD* v15; // r12
	__int64 v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // rax
	int* v19; // rbp
	__int64 v20; // rdx
	int* v21; // r14
	bool v22; // zf
	__int64 v23; // r15
	unsigned __int64 v24; // rax
	int* v25; // rax
	__int64 v26; // rcx
	__int64 v27; // r15
	_BYTE* v28; // r15
	_QWORD* v29; // rax
	_QWORD* v30; // rcx
	HANDLE EventW; // rcx
	__int64 v32; // rbx
	__int64 v33; // [rsp+20h] [rbp-78h] BYREF
	__int64 v34; // [rsp+28h] [rbp-70h]
	__int64 v35; // [rsp+30h] [rbp-68h]
	_DWORD* v36; // [rsp+38h] [rbp-60h]
	char v37[8]; // [rsp+40h] [rbp-58h] BYREF
	int* v38; // [rsp+48h] [rbp-50h]
	_BYTE* v39; // [rsp+50h] [rbp-48h]
	__int64 v40; // [rsp+58h] [rbp-40h]
	void* retaddr; // [rsp+98h] [rbp+0h] BYREF
	int v42; // [rsp+A0h] [rbp+8h]
	__int64 v43; // [rsp+B0h] [rbp+18h] BYREF
	__int64 v44; // [rsp+B8h] [rbp+20h] BYREF

	result = &retaddr;
	if (*(a1 - 21) && a2)
	{
		StackBase = NtCurrentTeb()->NtTib.StackBase;
		v6 = *(StackBase - 1);
		v36 = StackBase - 1;
		*v36 = 1;
		v42 = v6;
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		v9 = v7;
		if (v7)
		{
			if ((unsigned int)(v7 - 10) <= 1 || v7 == 3002)
			{
				sub_1400B23B0((__int64)(a1 - 55), 16);
				v44 = 0x141D0DF40i64;
				sub_1401A3130(95, 0, &v44, v9);
			}
			else
			{
				sub_1400B2700((__int64)(a1 - 55), v8, v7);
				v43 = 0x141D0D868i64;
				sub_1401A3130(95, 0, &v43, v9);
			}
		}
		else
		{
			v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 64i64))(a2);
			if (v11 == 1)
			{
				sub_1400B4B20((__int64)(a1 + 30), a1[31], a1[32]);
				v12 = a1 - 53;
				v13 = (__int64(__fastcall***)(_QWORD, __int64))(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 72i64))(
					a2,
					0i64);
				CurrentThreadId = GetCurrentThreadId();
				v15 = 0i64;
				v16 = CurrentThreadId;
				if (*((_DWORD*)a1 - 106) == CurrentThreadId)
				{
					++v12[1];
				}
				else
				{
					v17 = 0i64;
					while (_InterlockedCompareExchange64(v12 + 1, 1i64, 0i64))
					{
						_mm_pause();
						if ((unsigned __int64)++v17 >= 0x400)
						{
							sub_14019FB60((__int64)(a1 - 53), CurrentThreadId);
							goto LABEL_17;
						}
					}
					*(_DWORD*)v12 = CurrentThreadId;
				}
			LABEL_17:
				v18 = (**v13)(v13, v16);
				v19 = 0i64;
				v38 = 0i64;
				v40 = 0i64;
				v20 = -1i64;
				v21 = (int*)v18;
				do
					v22 = *(_BYTE*)(v18 + v20++ + 1) == 0;
				while (!v22);
				v23 = v20 + v18;
				v24 = v20;
				v35 = v20;
				v34 = v20 + 1;
				if (v20 != -2)
				{
					v25 = sub_14018B280(v20 + 1, 0);
					v26 = (__int64)v25 + v34;
					v19 = v25;
					v38 = v25;
					v24 = v35;
					v40 = v26;
				}
				sub_1407DB590(v19, v21, v24);
				v27 = v23 - (_QWORD)v21;
				v22 = (int*)((char*)v19 + v27) == 0i64;
				v28 = (char*)v19 + v27;
				v39 = v28;
				if (!v22)
					*v28 = 0;
				v29 = (_QWORD*)a1[32];
				if (v29 == (_QWORD*)a1[33])
				{
					sub_1400B5010(a1 + 30, (char*)a1[32], (__int64)v37);
				}
				else
				{
					if (v29)
					{
						v30 = (_QWORD*)a1[32];
						v29[1] = 0i64;
						v29[2] = 0i64;
						v29[3] = 0i64;
						sub_14001B240(v30, v19, (__int64)v28);
					}
					a1[32] += 32i64;
				}
				if (v19)
					sub_14018B900((__int64)v19, 0);
				if (v12[1] <= 1ui64)
				{
					*(_DWORD*)v12 = 0;
					_InterlockedExchange64(v12 + 1, 0i64);
					if (v12[2])
					{
						if (!v12[3])
						{
							EventW = CreateEventW(0i64, 0, 0, 0i64);
							if (_InterlockedCompareExchange64(v12 + 3, (signed __int64)EventW, 0i64))
								CloseHandle(EventW);
						}
						SetEvent((HANDLE)v12[3]);
					}
				}
				else
				{
					--v12[1];
				}
				if (a1 != (_QWORD*)440)
					v15 = a1 + 1;
				v32 = (*(__int64(__fastcall**)(_QWORD, _QWORD*))(*(_QWORD*)*(a1 - 21) + 120i64))(*(a1 - 21), v15);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v32 + 48i64))(v32, a1[19]);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v32 + 56i64))(v32, *(a1 - 24));
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v32 + 64i64))(v32, *(_QWORD*)(a1[31] + 8i64));
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 8i64))(v32);
				sub_1400B23B0((__int64)(a1 - 55), 13);
			}
			else
			{
				sub_1400B2700((__int64)(a1 - 55), v10, -1i64);
				v33 = 0x141D0DEF0i64;
				sub_1401A3130(95, 0, &v33, v11);
			}
		}
		(**(void(__fastcall***)(__int64))a2)(a2);
		result = (void**)v36;
		*v36 = v42;
	}
	return result;
}
// 1400B3741: variable 'v8' is possibly undefined
// 1400B37C3: variable 'v10' is possibly undefined
// 1400B386F: variable 'v16' is possibly undefined
// 1400B36C0: using guessed type char var_58[8];

