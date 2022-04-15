//----- (00000001401BAEC0) ----------------------------------------------------
int __fastcall sub_1401BAEC0(__int64 a1, LONGLONG* a2, __int64 a3)
{
	unsigned __int64 v3; // r15
	int result; // eax
	signed int v7; // eax
	int v8; // r14d
	unsigned __int64 v9; // rdi
	unsigned __int64 v10; // r12
	__int64 v11; // r8
	unsigned __int64 v12; // rbx
	LONGLONG v13; // r13
	void* v14; // rcx
	unsigned __int64 v15; // r13
	unsigned __int64 v16; // r15
	LARGE_INTEGER* v17; // r12
	DWORD v18; // r8d
	signed int v19; // eax
	bool v20; // sf
	unsigned __int64 v21; // r15
	LARGE_INTEGER* v22; // r12
	DWORD v23; // r8d
	signed int v24; // eax
	bool v25; // sf
	unsigned __int64 v26; // r15
	unsigned __int64* v27; // r12
	DWORD v28; // r8d
	bool v29; // sf
	unsigned __int64* v30; // r15
	DWORD v31; // r8d
	unsigned __int64 v32; // r12
	__int64 v33; // rdx
	void* v34; // rcx
	unsigned __int64 v35; // r15
	LARGE_INTEGER* v36; // r13
	DWORD v37; // r8d
	signed int v38; // eax
	bool v39; // sf
	unsigned __int64 v40; // r15
	LARGE_INTEGER* v41; // r13
	DWORD v42; // r8d
	signed int v43; // eax
	bool v44; // sf
	unsigned __int64 v45; // r15
	unsigned __int64* v46; // r12
	DWORD v47; // r8d
	bool v48; // sf
	unsigned __int64* v49; // r15
	DWORD v50; // r8d
	bool v51; // sf
	unsigned __int64 v52; // r14
	unsigned __int64 v53; // r13
	void* v54; // rcx
	unsigned __int64 v55; // r13
	unsigned __int64 v56; // r15
	LARGE_INTEGER* p_Buffer; // r12
	DWORD v58; // r8d
	signed int LastError; // eax
	bool v60; // sf
	unsigned __int64 v61; // r15
	LARGE_INTEGER* v62; // r12
	DWORD v63; // r8d
	signed int v64; // eax
	bool v65; // sf
	unsigned __int64 v66; // r15
	unsigned __int64* v67; // r12
	DWORD v68; // r8d
	bool v69; // sf
	unsigned __int64* v70; // r15
	DWORD v71; // r8d
	bool v72; // sf
	LARGE_INTEGER v73; // rdi
	DWORD NumberOfBytesWritten; // [rsp+30h] [rbp-50h] BYREF
	unsigned __int64 v75; // [rsp+38h] [rbp-48h] BYREF
	LARGE_INTEGER Buffer; // [rsp+40h] [rbp-40h] BYREF
	LARGE_INTEGER v77; // [rsp+48h] [rbp-38h] BYREF
	signed __int64 v78; // [rsp+50h] [rbp-30h] BYREF
	LARGE_INTEGER v79; // [rsp+58h] [rbp-28h] BYREF
	LARGE_INTEGER liDistanceToMove; // [rsp+60h] [rbp-20h]
	unsigned __int64 v81; // [rsp+68h] [rbp-18h]

	v3 = *a2;
	v75 = a3;
	v81 = v3;
	if (!a3)
	{
		result = sub_1401BB790(a1, v3);
		if (result >= 0)
		{
			result = 0;
			*a2 = 0i64;
		}
		return result;
	}
	if (!v3)
	{
		v7 = sub_1401BA9B0(a1, a2, a3);
		v8 = 0;
		if (v7 < 0)
			return v7;
		return v8;
	}
	if ((v3 & 0xF) != 0)
		return -2147024809;
	if (v3 < 0x240)
		return -2147024809;
	if (v3 + 24 > *(_QWORD*)(a1 + 576))
		return -2147024809;
	v75 = (a3 + 15) & 0xFFFFFFFFFFFFFFF0ui64;
	if (a3 + 15 < 0 || v75 == 0)
		return -2147024809;
	v9 = 8i64;
	liDistanceToMove.QuadPart = v3 - 8;
	result = sub_1401BC1A0(a1, (LARGE_INTEGER)(v3 - 8), (int*)&v78, 8ui64);
	if (result < 0)
		return result;
	v10 = v78;
	if (v78 <= 0 || (v78 & 0xF) != 0)
		return -1610416127;
	v11 = v75;
	if (v75 == v78)
		return 0;
	if (v75 >= v78)
	{
		if (v3 + v78 + 8 >= *(_QWORD*)(a1 + 576))
			goto LABEL_150;
		v52 = v78 + v3;
		if (sub_1401BC1A0(a1, (LARGE_INTEGER)(v78 + v3 + 8), (int*)&Buffer, 8ui64) >= 0
			&& Buffer.QuadPart < 0
			&& (Buffer.LowPart & 0xF) == 0
			&& sub_1401BC1A0(a1, (LARGE_INTEGER)(v52 + 16 - Buffer.QuadPart), (int*)&v79, 8ui64) >= 0
			&& Buffer.QuadPart == v79.QuadPart)
		{
			v11 = v75;
			v53 = v78 + 16 - Buffer.QuadPart;
			if (v75 > v53)
				goto LABEL_150;
			if ((int)sub_1401BBDA0(a1, v52 + 16, -Buffer.QuadPart) >= 0)
			{
				if (v75 + 32 > v53)
				{
					v75 = v53;
				}
				else
				{
					v54 = *(void**)(a1 + 32);
					v55 = v53 - v75 - 16;
					v77.QuadPart = v3 + v75 + 16;
					v56 = 8i64;
					Buffer.QuadPart = -(__int64)v55;
					p_Buffer = &Buffer;
					if (SetFilePointerEx(v54, (LARGE_INTEGER)(v77.QuadPart - 8), 0i64, 0))
					{
						while (1)
						{
							v58 = 0x80000000;
							if (v56 < 0x80000000)
								v58 = v56;
							if (!WriteFile(*(HANDLE*)(a1 + 32), p_Buffer, v58, &NumberOfBytesWritten, 0i64))
								break;
							p_Buffer = (LARGE_INTEGER*)((char*)p_Buffer + NumberOfBytesWritten);
							v56 -= NumberOfBytesWritten;
							if (!v56)
								goto LABEL_119;
						}
					}
					LastError = GetLastError();
					v60 = LastError < 0;
					if (LastError > 0)
						v60 = 1;
					if (!v60)
					{
					LABEL_119:
						v61 = 8i64;
						v62 = &Buffer;
						if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)(v55 + v77.QuadPart), 0i64, 0))
						{
							while (1)
							{
								v63 = 0x80000000;
								if (v61 < 0x80000000)
									v63 = v61;
								if (!WriteFile(*(HANDLE*)(a1 + 32), v62, v63, &NumberOfBytesWritten, 0i64))
									break;
								v62 = (LARGE_INTEGER*)((char*)v62 + NumberOfBytesWritten);
								v61 -= NumberOfBytesWritten;
								if (!v61)
									goto LABEL_124;
							}
						}
						v64 = GetLastError();
						v65 = v64 < 0;
						if (v64 > 0)
							v65 = 1;
						if (!v65)
							LABEL_124:
						sub_1401BBAB0(a1, v77, v55);
					}
				}
				v66 = 8i64;
				v67 = &v75;
				if (SetFilePointerEx(*(HANDLE*)(a1 + 32), liDistanceToMove, 0i64, 0))
				{
					while (1)
					{
						v68 = 0x80000000;
						if (v66 < 0x80000000)
							v68 = v66;
						if (!WriteFile(*(HANDLE*)(a1 + 32), v67, v68, &NumberOfBytesWritten, 0i64))
							break;
						v67 = (unsigned __int64*)((char*)v67 + NumberOfBytesWritten);
						v66 -= NumberOfBytesWritten;
						if (!v66)
							goto LABEL_139;
					}
				}
				result = GetLastError();
				v69 = result < 0;
				if (result > 0)
				{
					result = (unsigned __int16)result | 0x80070000;
					v69 = result < 0;
				}
				if (v69)
					return result;
			LABEL_139:
				v70 = &v75;
				if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)(v81 + v75), 0i64, 0))
				{
					while (1)
					{
						v71 = 0x80000000;
						if (v9 < 0x80000000)
							v71 = v9;
						if (!WriteFile(*(HANDLE*)(a1 + 32), v70, v71, &NumberOfBytesWritten, 0i64))
							break;
						v70 = (unsigned __int64*)((char*)v70 + NumberOfBytesWritten);
						v9 -= NumberOfBytesWritten;
						if (!v9)
							return 0;
					}
				}
				goto LABEL_145;
			}
		}
		v11 = v75;
	LABEL_150:
		result = sub_1401BA9B0(a1, (LONGLONG*)&v79, v11);
		if (result < 0)
			return result;
		v73 = v79;
		result = sub_1401BC640(a1, v79, (LARGE_INTEGER)v3, v78);
		if (result < 0)
			return result;
		sub_1401BB790(a1, v3);
		*a2 = v73.QuadPart;
		return 0;
	}
	v12 = v78 + v3;
	if (v78 + v3 + 8 >= *(_QWORD*)(a1 + 576))
		goto LABEL_62;
	if (sub_1401BC1A0(a1, (LARGE_INTEGER)(v12 + 8), (int*)&Buffer, 8ui64) < 0
		|| Buffer.QuadPart >= 0
		|| (Buffer.LowPart & 0xF) != 0
		|| sub_1401BC1A0(a1, (LARGE_INTEGER)(v12 + 16 - Buffer.QuadPart), (int*)&v79, 8ui64) < 0
		|| Buffer.QuadPart != v79.QuadPart)
	{
		v10 = v78;
		v11 = v75;
	LABEL_62:
		if (v11 + 32 <= v10)
		{
			v32 = v10 - v11 - 16;
			v33 = v11 + v3 + 16 - 8;
			Buffer.QuadPart = v11 + v3 + 16;
			v34 = *(void**)(a1 + 32);
			v35 = 8i64;
			v36 = &v77;
			v77.QuadPart = -(__int64)v32;
			if (SetFilePointerEx(v34, (LARGE_INTEGER)v33, 0i64, 0))
			{
				while (1)
				{
					v37 = 0x80000000;
					if (v35 < 0x80000000)
						v37 = v35;
					if (!WriteFile(*(HANDLE*)(a1 + 32), v36, v37, &NumberOfBytesWritten, 0i64))
						break;
					v36 = (LARGE_INTEGER*)((char*)v36 + NumberOfBytesWritten);
					v35 -= NumberOfBytesWritten;
					if (!v35)
						goto LABEL_72;
				}
			}
			v38 = GetLastError();
			v39 = v38 < 0;
			if (v38 > 0)
				v39 = 1;
			if (!v39)
			{
			LABEL_72:
				v40 = 8i64;
				v41 = &v77;
				if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)(v32 + Buffer.QuadPart), 0i64, 0))
				{
					while (1)
					{
						v42 = 0x80000000;
						if (v40 < 0x80000000)
							v42 = v40;
						if (!WriteFile(*(HANDLE*)(a1 + 32), v41, v42, &NumberOfBytesWritten, 0i64))
							break;
						v41 = (LARGE_INTEGER*)((char*)v41 + NumberOfBytesWritten);
						v40 -= NumberOfBytesWritten;
						if (!v40)
							goto LABEL_81;
					}
				}
				v43 = GetLastError();
				v44 = v43 < 0;
				if (v43 > 0)
					v44 = 1;
				if (!v44)
					LABEL_81:
				sub_1401BBAB0(a1, Buffer, v32);
			}
			v45 = 8i64;
			v46 = &v75;
			if (SetFilePointerEx(*(HANDLE*)(a1 + 32), liDistanceToMove, 0i64, 0))
			{
				while (1)
				{
					v47 = 0x80000000;
					if (v45 < 0x80000000)
						v47 = v45;
					if (!WriteFile(*(HANDLE*)(a1 + 32), v46, v47, &NumberOfBytesWritten, 0i64))
						break;
					v46 = (unsigned __int64*)((char*)v46 + NumberOfBytesWritten);
					v45 -= NumberOfBytesWritten;
					if (!v45)
						goto LABEL_91;
				}
			}
			result = GetLastError();
			v48 = result < 0;
			if (result > 0)
			{
				result = (unsigned __int16)result | 0x80070000;
				v48 = result < 0;
			}
			if (!v48)
			{
			LABEL_91:
				v49 = &v75;
				if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)(v81 + v75), 0i64, 0))
				{
					while (1)
					{
						v50 = 0x80000000;
						if (v9 < 0x80000000)
							v50 = v9;
						if (!WriteFile(*(HANDLE*)(a1 + 32), v49, v50, &NumberOfBytesWritten, 0i64))
							break;
						v49 = (unsigned __int64*)((char*)v49 + NumberOfBytesWritten);
						v9 -= NumberOfBytesWritten;
						if (!v9)
							return 0;
					}
				}
				result = GetLastError();
				v51 = result < 0;
				if (result > 0)
				{
					result = (unsigned __int16)result | 0x80070000;
					v51 = result < 0;
				}
				if (!v51)
					return 0;
			}
			return result;
		}
		return 0;
	}
	v13 = -Buffer.QuadPart;
	if ((int)sub_1401BBDA0(a1, v12 + 16, -Buffer.QuadPart) >= 0)
	{
		v14 = *(void**)(a1 + 32);
		v15 = v78 - v75 + v13;
		v77.QuadPart = v3 + v75 + 16;
		v16 = 8i64;
		v17 = &Buffer;
		Buffer.QuadPart = -(__int64)v15;
		if (SetFilePointerEx(v14, (LARGE_INTEGER)(v77.QuadPart - 8), 0i64, 0))
		{
			while (1)
			{
				v18 = 0x80000000;
				if (v16 < 0x80000000)
					v18 = v16;
				if (!WriteFile(*(HANDLE*)(a1 + 32), v17, v18, &NumberOfBytesWritten, 0i64))
					break;
				v17 = (LARGE_INTEGER*)((char*)v17 + NumberOfBytesWritten);
				v16 -= NumberOfBytesWritten;
				if (!v16)
					goto LABEL_35;
			}
		}
		v19 = GetLastError();
		v20 = v19 < 0;
		if (v19 > 0)
			v20 = 1;
		if (!v20)
		{
		LABEL_35:
			v21 = 8i64;
			v22 = &Buffer;
			if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)(v15 + v77.QuadPart), 0i64, 0))
			{
				while (1)
				{
					v23 = 0x80000000;
					if (v21 < 0x80000000)
						v23 = v21;
					if (!WriteFile(*(HANDLE*)(a1 + 32), v22, v23, &NumberOfBytesWritten, 0i64))
						break;
					v22 = (LARGE_INTEGER*)((char*)v22 + NumberOfBytesWritten);
					v21 -= NumberOfBytesWritten;
					if (!v21)
						goto LABEL_44;
				}
			}
			v24 = GetLastError();
			v25 = v24 < 0;
			if (v24 > 0)
				v25 = 1;
			if (!v25)
				LABEL_44:
			sub_1401BBAB0(a1, v77, v15);
		}
	}
	v26 = 8i64;
	v27 = &v75;
	if (SetFilePointerEx(*(HANDLE*)(a1 + 32), liDistanceToMove, 0i64, 0))
	{
		while (1)
		{
			v28 = 0x80000000;
			if (v26 < 0x80000000)
				v28 = v26;
			if (!WriteFile(*(HANDLE*)(a1 + 32), v27, v28, &NumberOfBytesWritten, 0i64))
				break;
			v27 = (unsigned __int64*)((char*)v27 + NumberOfBytesWritten);
			v26 -= NumberOfBytesWritten;
			if (!v26)
				goto LABEL_54;
		}
	}
	result = GetLastError();
	v29 = result < 0;
	if (result > 0)
	{
		result = (unsigned __int16)result | 0x80070000;
		v29 = result < 0;
	}
	if (v29)
		return result;
LABEL_54:
	v30 = &v75;
	if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)(v81 + v75), 0i64, 0))
	{
		while (1)
		{
			v31 = 0x80000000;
			if (v9 < 0x80000000)
				v31 = v9;
			if (!WriteFile(*(HANDLE*)(a1 + 32), v30, v31, &NumberOfBytesWritten, 0i64))
				break;
			v30 = (unsigned __int64*)((char*)v30 + NumberOfBytesWritten);
			v9 -= NumberOfBytesWritten;
			if (!v9)
				return 0;
		}
	}
LABEL_145:
	result = GetLastError();
	v72 = result < 0;
	if (result > 0)
	{
		result = (unsigned __int16)result | 0x80070000;
		v72 = result < 0;
	}
	if (!v72)
		return 0;
	return result;
}

