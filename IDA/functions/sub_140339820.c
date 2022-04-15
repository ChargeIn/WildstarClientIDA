//----- (0000000140339820) ----------------------------------------------------
__int64 __fastcall sub_140339820(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rdi
	int v5; // r12d
	int v6; // r14d
	int v7; // r13d
	SOCKET v8; // rsi
	__int64 fd_count; // r8
	__int64 v10; // r9
	u_int v11; // r10d
	__int64 v12; // rbx
	SOCKET v13; // rax
	__int64 j; // rdx
	unsigned int i; // edx
	int tv_sec; // ecx
	fd_set* v17; // r9
	fd_set* v18; // r8
	fd_set* v19; // rdx
	int v20; // eax
	int Error; // ebx
	_QWORD* v22; // rax
	_QWORD* v23; // rdi
	__int64 v24; // rbx
	SOCKET v25; // r14
	void(__fastcall * *v26)(__int64); // rax
	void(__fastcall * *v27)(__int64); // rax
	void(__fastcall * *v28)(__int64); // rax
	int v29; // esi
	int v30; // eax
	void(__fastcall * *v31)(__int64); // rax
	int v32; // edx
	void(__fastcall * *v33)(__int64); // rax
	struct timeval* timeout; // [rsp+20h] [rbp-E0h]
	__int64 v36; // [rsp+30h] [rbp-D0h] BYREF
	struct timeval v37; // [rsp+38h] [rbp-C8h] BYREF
	fd_set v38; // [rsp+40h] [rbp-C0h] BYREF
	fd_set v39; // [rsp+250h] [rbp+150h] BYREF
	fd_set v40; // [rsp+460h] [rbp+360h] BYREF
	char Buffer[4096]; // [rsp+670h] [rbp+570h] BYREF

	v2 = *(_QWORD**)(a1 + 32);
	v37.tv_sec = a2;
	v38.fd_count = 0;
	v39.fd_count = 0;
	v40.fd_count = 0;
	v3 = (_QWORD*)*v2;
	v5 = 0;
	v6 = 0;
	v7 = 0;
	v8 = 0i64;
	fd_count = 0i64;
	v10 = 0i64;
	v11 = 0;
	if ((_QWORD*)*v2 == v2)
		goto LABEL_84;
	while (1)
	{
		v12 = v3[2];
		if (v12)
		{
			(**(void(__fastcall***)(_QWORD, __int64, __int64, __int64))v12)(v3[2], a2, fd_count, v10);
			fd_count = v38.fd_count;
			v10 = v39.fd_count;
			v11 = v40.fd_count;
		}
		v13 = *(_QWORD*)(v12 + 272);
		if (*(_DWORD*)(v12 + 280) == 2)
		{
			for (i = 0; i < (unsigned int)v10; ++i)
			{
				if (v39.fd_array[i] == v13)
					break;
			}
			if (i == (_DWORD)v10 && (unsigned int)v10 < 0x40)
			{
				v39.fd_array[i] = v13;
				++v39.fd_count;
			}
			++v6;
			for (j = 0i64; (unsigned int)j < v11; j = (unsigned int)(j + 1))
			{
				if (v40.fd_array[(unsigned int)j] == v13)
					break;
			}
			if ((_DWORD)j == v11 && v11 < 0x40)
			{
				v40.fd_array[(unsigned int)j] = v13;
				++v40.fd_count;
			}
			++v7;
		}
		else if (*(_DWORD*)(v12 + 280) == 3)
		{
			for (j = 0i64; (unsigned int)j < (unsigned int)fd_count; j = (unsigned int)(j + 1))
			{
				if (v38.fd_array[(unsigned int)j] == v13)
					break;
			}
			if ((_DWORD)j == (_DWORD)fd_count && (unsigned int)fd_count < 0x40)
			{
				v38.fd_array[(unsigned int)j] = v13;
				++v38.fd_count;
			}
			++v5;
			if (*(_QWORD*)(v12 + 384))
			{
				for (j = 0i64; (unsigned int)j < (unsigned int)v10; j = (unsigned int)(j + 1))
				{
					if (v39.fd_array[(unsigned int)j] == v13)
						break;
				}
				if ((_DWORD)j == (_DWORD)v10 && (unsigned int)v10 < 0x40)
				{
					v39.fd_array[(unsigned int)j] = v13;
					++v39.fd_count;
				}
				++v6;
			}
		}
		else
		{
			j = (unsigned int)(*(_DWORD*)(v12 + 280) - 4);
			if (*(_DWORD*)(v12 + 280) != 4)
				goto LABEL_43;
			for (j = 0i64; (unsigned int)j < (unsigned int)fd_count; j = (unsigned int)(j + 1))
			{
				if (v38.fd_array[(unsigned int)j] == v13)
					break;
			}
			if ((_DWORD)j == (_DWORD)fd_count && (unsigned int)fd_count < 0x40)
			{
				v38.fd_array[(unsigned int)j] = v13;
				++v38.fd_count;
			}
			++v5;
		}
		if (v8 < v13)
			v8 = v13;
	LABEL_43:
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v12 + 8i64))(v12, j, fd_count, v10);
		v3 = (_QWORD*)*v3;
		if (v3 == *(_QWORD**)(a1 + 32))
			break;
		fd_count = v38.fd_count;
		v10 = v39.fd_count;
		v11 = v40.fd_count;
	}
	if (!v5 && !v6 && !v7)
	{
	LABEL_84:
		Sleep(v37.tv_sec);
		return 0i64;
	}
	tv_sec = v37.tv_sec;
	v17 = &v40;
	v18 = &v39;
	v37.tv_sec /= 0x3E8u;
	v19 = &v38;
	v37.tv_usec = 1000 * (tv_sec - 1000 * v37.tv_sec);
	if (!v7)
		v17 = 0i64;
	if (!v6)
		v18 = 0i64;
	if (!v5)
		v19 = 0i64;
	v20 = select(v8, v19, v18, v17, &v37);
	if (v20 == -1)
	{
		Error = WSAGetLastError();
		sub_1401B3450(Buffer, 2048i64, Error);
		v36 = 0x141DECD90i64;
		LODWORD(timeout) = Error;
		sub_1401A3130(11, 0, &v36, L"Unexpected select() error", timeout, Buffer);
		goto LABEL_57;
	}
	if (v20)
	{
	LABEL_57:
		v22 = *(_QWORD**)(a1 + 32);
		v23 = (_QWORD*)*v22;
		if ((_QWORD*)*v22 != v22)
		{
			while (1)
			{
				v24 = v23[2];
				if (v24)
					(**(void(__fastcall***)(_QWORD))v24)(v23[2]);
				v25 = *(_QWORD*)(v24 + 272);
				if (*(_DWORD*)(v24 + 280) != 2)
				{
					if (*(_DWORD*)(v24 + 280) == 3)
					{
						if (_WSAFDIsSet(*(_QWORD*)(v24 + 272), &v38))
						{
							v27 = *(void(__fastcall***)(__int64))v24;
							v36 = v24;
							(*v27)(v24);
							sub_140339DB0(a1, &v36);
						}
						if (_WSAFDIsSet(v25, &v39))
						{
							v28 = *(void(__fastcall***)(__int64))v24;
							v36 = v24;
							(*v28)(v24);
							sub_14033A030(a1, &v36);
						}
					}
					else if (*(_DWORD*)(v24 + 280) == 4 && _WSAFDIsSet(*(_QWORD*)(v24 + 272), &v38))
					{
						v26 = *(void(__fastcall***)(__int64))v24;
						v36 = v24;
						(*v26)(v24);
						sub_14033A200(a1, &v36);
					}
					goto LABEL_82;
				}
				v29 = _WSAFDIsSet(*(_QWORD*)(v24 + 272), &v40);
				v30 = _WSAFDIsSet(v25, &v39);
				if (v29)
					break;
				if (v30)
				{
					if (!*(_WORD*)(v24 + 222))
						sub_140334D90(v24 + 144);
					if (!*(_WORD*)(v24 + 94))
						sub_140334D90(v24 + 16);
					v36 = 0x141DECE80i64;
					sub_1401A3130(11, 1, &v36, v24 + 94, v24 + 222);
					*(_DWORD*)(v24 + 280) = 3;
					v33 = *(void(__fastcall***)(__int64))v24;
					v36 = v24;
					(*v33)(v24);
					v32 = 1;
					goto LABEL_81;
				}
			LABEL_82:
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
				v23 = (_QWORD*)*v23;
				if (v23 == *(_QWORD**)(a1 + 32))
					return 0i64;
			}
			if (!*(_WORD*)(v24 + 222))
				sub_140334D90(v24 + 144);
			if (!*(_WORD*)(v24 + 94))
				sub_140334D90(v24 + 16);
			v36 = 0x141DECED0i64;
			sub_1401A3130(11, 0, &v36, v24 + 94, v24 + 222);
			*(_DWORD*)(v24 + 280) = 5;
			v31 = *(void(__fastcall***)(__int64))v24;
			v36 = v24;
			(*v31)(v24);
			v32 = 2;
		LABEL_81:
			sub_140338DF0(a1, v32, &v36);
			goto LABEL_82;
		}
	}
	return 0i64;
}
// 1403398AF: variable 'a2' is possibly undefined
// 140339B19: variable 'timeout' is possibly undefined
// 140AF27C8: using guessed type wchar_t aUnexpectedSele[26];
// 140339820: using guessed type char Buffer[4096];

