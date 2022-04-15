#include "../winhttp.h"

//----- (00000001401BA9B0) ----------------------------------------------------
signed int __fastcall sub_1401BA9B0(__int64 a1, LONGLONG* a2, __int64 a3)
{
	LONGLONG* v3; // r13
	signed int result; // eax
	__int64 v6; // rax
	unsigned __int64 v7; // rdx
	__int64 v8; // r9
	__int64 v9; // r8
	_QWORD* v10; // rcx
	unsigned __int64 v11; // rax
	unsigned __int64 v12; // rbx
	unsigned __int64 v13; // r13
	LONGLONG v14; // r12
	unsigned __int64 v15; // rsi
	__int64* p_Buffer; // r14
	DWORD v17; // r8d
	signed int LastError; // eax
	bool v19; // sf
	unsigned __int64 v20; // rsi
	__int64* v21; // r14
	DWORD v22; // r8d
	signed int v23; // eax
	bool v24; // sf
	unsigned __int64 v25; // rcx
	unsigned __int64 v26; // rax
	LARGE_INTEGER v27; // r12
	void* v28; // rcx
	unsigned __int64 v29; // r13
	unsigned __int64 v30; // rsi
	__int64* p_NumberOfBytesWritten; // r14
	DWORD v32; // r8d
	signed int v33; // eax
	bool v34; // sf
	__int64* v35; // rsi
	DWORD v36; // r8d
	signed int v37; // eax
	bool v38; // sf
	LARGE_INTEGER v39; // rax
	void* v40; // rcx
	LONGLONG v41; // r12
	unsigned __int64 v42; // rsi
	unsigned __int64* v43; // r14
	DWORD v44; // r8d
	bool v45; // sf
	unsigned __int64 v46; // rsi
	unsigned __int64* v47; // r14
	DWORD v48; // r8d
	bool v49; // sf
	__int64* v50; // rsi
	DWORD v51; // r8d
	bool v52; // sf
	unsigned __int64 Buffer; // [rsp+30h] [rbp-30h] BYREF
	unsigned __int64 v54; // [rsp+38h] [rbp-28h] BYREF
	LONGLONG* v55; // [rsp+88h] [rbp+28h] BYREF
	unsigned __int64 v56; // [rsp+90h] [rbp+30h] BYREF
	__int64 NumberOfBytesWritten; // [rsp+98h] [rbp+38h] BYREF

	v55 = a2;
	v3 = a2;
	if (!a2)
		return -2147024809;
	if (!a3)
	{
		result = 0;
		*a2 = 0i64;
		return result;
	}
	v56 = (a3 + 15) & 0xFFFFFFFFFFFFFFF0ui64;
	if (a3 + 15 < 0 || v56 == 0)
		return -2147024809;
	v6 = sub_1401BA830(a1);
	v7 = v56;
	v8 = *(_QWORD*)(v6 + 8);
	v9 = v8;
	v10 = *(_QWORD**)(v8 + 8);
	while (v10)
	{
		v11 = v10[5];
		if (v11 == v56 || v11 >= v56)
		{
			v9 = (__int64)v10;
			v10 = (_QWORD*)v10[2];
		}
		else
		{
			v10 = (_QWORD*)v10[3];
		}
	}
	v12 = 8i64;
	if (v9 != v8)
	{
		v13 = *(_QWORD*)(v9 + 40);
		v14 = *(_QWORD*)(v9 + 32);
		if (v56 + 16 == v13)
			v7 = *(_QWORD*)(v9 + 40);
		Buffer = v7;
		if (sub_1401BBE50(a1, v9) >= 0)
		{
			v15 = 8i64;
			p_Buffer = (__int64*)&Buffer;
			if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)(v14 - 8), 0i64, 0))
			{
				while (1)
				{
					v17 = 0x80000000;
					if (v15 < 0x80000000)
						v17 = v15;
					if (!WriteFile(*(HANDLE*)(a1 + 32), p_Buffer, v17, (LPDWORD)&NumberOfBytesWritten, 0i64))
						break;
					p_Buffer = (__int64*)((char*)p_Buffer + (unsigned int)NumberOfBytesWritten);
					v15 -= (unsigned int)NumberOfBytesWritten;
					if (!v15)
						goto LABEL_26;
				}
			}
			LastError = GetLastError();
			v19 = LastError < 0;
			if (LastError > 0)
				v19 = 1;
			if (!v19)
			{
			LABEL_26:
				v20 = 8i64;
				v21 = (__int64*)&Buffer;
				if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)(v14 + Buffer), 0i64, 0))
				{
					while (1)
					{
						v22 = 0x80000000;
						if (v20 < 0x80000000)
							v22 = v20;
						if (!WriteFile(*(HANDLE*)(a1 + 32), v21, v22, (LPDWORD)&NumberOfBytesWritten, 0i64))
							break;
						v21 = (__int64*)((char*)v21 + (unsigned int)NumberOfBytesWritten);
						v20 -= (unsigned int)NumberOfBytesWritten;
						if (!v20)
							goto LABEL_35;
					}
				}
				v23 = GetLastError();
				v24 = v23 < 0;
				if (v23 > 0)
					v24 = 1;
				if (!v24)
				{
				LABEL_35:
					v25 = Buffer;
					*v55 = v14;
					if (v25 < v13)
					{
						v26 = -16i64 - v25;
						v27.QuadPart = v25 + v14 + 16;
						v28 = *(void**)(a1 + 32);
						v29 = v26 + v13;
						v30 = 8i64;
						p_NumberOfBytesWritten = &NumberOfBytesWritten;
						NumberOfBytesWritten = -(__int64)v29;
						if (SetFilePointerEx(v28, (LARGE_INTEGER)(v27.QuadPart - 8), 0i64, 0))
						{
							while (1)
							{
								v32 = 0x80000000;
								if (v30 < 0x80000000)
									v32 = v30;
								if (!WriteFile(*(HANDLE*)(a1 + 32), p_NumberOfBytesWritten, v32, (LPDWORD)&v55, 0i64))
									break;
								p_NumberOfBytesWritten = (__int64*)((char*)p_NumberOfBytesWritten + (unsigned int)v55);
								v30 -= (unsigned int)v55;
								if (!v30)
									goto LABEL_45;
							}
						}
						v33 = GetLastError();
						v34 = v33 < 0;
						if (v33 > 0)
							v34 = 1;
						if (!v34)
						{
						LABEL_45:
							v35 = &NumberOfBytesWritten;
							if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)(v27.QuadPart + v29), 0i64, 0))
							{
								while (1)
								{
									v36 = 0x80000000;
									if (v12 < 0x80000000)
										v36 = v12;
									if (!WriteFile(*(HANDLE*)(a1 + 32), v35, v36, (LPDWORD)&v55, 0i64))
										break;
									v35 = (__int64*)((char*)v35 + (unsigned int)v55);
									v12 -= (unsigned int)v55;
									if (!v12)
										goto LABEL_50;
								}
							}
							v37 = GetLastError();
							v38 = v37 < 0;
							if (v37 > 0)
								v38 = 1;
							if (!v38)
								LABEL_50:
							sub_1401BBAB0(a1, v27, v29);
						}
					}
					return 0;
				}
			}
		}
		v7 = v56;
		v3 = v55;
	}
	v39 = *(LARGE_INTEGER*)(a1 + 576);
	v40 = *(void**)(a1 + 32);
	v41 = v39.QuadPart + 8;
	v42 = 8i64;
	v54 = v7 + v39.QuadPart + 16;
	v43 = &v56;
	if (SetFilePointerEx(v40, v39, 0i64, 0))
	{
		while (1)
		{
			v44 = 0x80000000;
			if (v42 < 0x80000000)
				v44 = v42;
			if (!WriteFile(*(HANDLE*)(a1 + 32), v43, v44, (LPDWORD)&v55, 0i64))
				break;
			v43 = (unsigned __int64*)((char*)v43 + (unsigned int)v55);
			v42 -= (unsigned int)v55;
			if (!v42)
				goto LABEL_65;
		}
	}
	result = GetLastError();
	v45 = result < 0;
	if (result > 0)
	{
		result = (unsigned __int16)result | 0x80070000;
		v45 = result < 0;
	}
	if (!v45)
	{
	LABEL_65:
		v46 = 8i64;
		v47 = &v56;
		if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)(v41 + v56), 0i64, 0))
		{
			while (1)
			{
				v48 = 0x80000000;
				if (v46 < 0x80000000)
					v48 = v46;
				if (!WriteFile(*(HANDLE*)(a1 + 32), v47, v48, (LPDWORD)&v55, 0i64))
					break;
				v47 = (unsigned __int64*)((char*)v47 + (unsigned int)v55);
				v46 -= (unsigned int)v55;
				if (!v46)
					goto LABEL_74;
			}
		}
		result = GetLastError();
		v49 = result < 0;
		if (result > 0)
		{
			result = (unsigned __int16)result | 0x80070000;
			v49 = result < 0;
		}
		if (!v49)
		{
		LABEL_74:
			if (*(_QWORD*)(a1 + 576) == v54)
			{
			LABEL_85:
				*v3 = v41;
				return 0;
			}
			v50 = (__int64*)&v54;
			if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)520i64, 0i64, 0))
			{
				while (1)
				{
					v51 = 0x80000000;
					if (v12 < 0x80000000)
						v51 = v12;
					if (!WriteFile(*(HANDLE*)(a1 + 32), v50, v51, (LPDWORD)&v55, 0i64))
						break;
					v50 = (__int64*)((char*)v50 + (unsigned int)v55);
					v12 -= (unsigned int)v55;
					if (!v12)
						goto LABEL_84;
				}
			}
			result = GetLastError();
			v52 = result < 0;
			if (result > 0)
			{
				result = (unsigned __int16)result | 0x80070000;
				v52 = result < 0;
			}
			if (!v52)
			{
			LABEL_84:
				*(_QWORD*)(a1 + 576) = v54;
				goto LABEL_85;
			}
		}
	}
	return result;
}

