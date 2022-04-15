#include "../winhttp.h"

//----- (0000000140908420) ----------------------------------------------------
__int64 __fastcall sub_140908420(__int16* a1, int a2, unsigned __int16* a3, unsigned int a4, __int64 a5)
{
	__int64 v5; // rbx
	__int64 v6; // r15
	unsigned __int16* v8; // rdi
	int v10; // r13d
	unsigned __int16 v11; // ax
	__int64 v12; // rcx
	unsigned __int16 v13; // cx
	int v14; // edx
	unsigned __int64 v15; // r8
	unsigned __int16 v16; // dx
	int v17; // r9d
	unsigned int v18; // esi
	unsigned int v19; // r14d
	unsigned int v20; // ebp
	unsigned __int16 i; // ax
	unsigned __int16 v22; // cx
	int v23; // edx
	unsigned __int64 v24; // r8
	__int16 v25; // cx
	__int64 result; // rax
	int v27; // eax
	int v28; // [rsp+30h] [rbp-48h] BYREF
	unsigned int v29[3]; // [rsp+34h] [rbp-44h] BYREF
	unsigned __int16* v30; // [rsp+80h] [rbp+8h]
	unsigned __int16* v31; // [rsp+90h] [rbp+18h] BYREF
	__int16 v32; // [rsp+98h] [rbp+20h]

	v31 = a3;
	v5 = a5;
	v6 = 0xFFFFFFFFi64;
	v8 = a3;
	v32 = *a1;
	v30 = (unsigned __int16*)(a1 + 1);
	v10 = a4 & 8;
	if ((a4 & 8) != 0)
	{
	LABEL_2:
		while (2)
		{
			v11 = *v8;
			if (*v8 <= 0xFFu)
			{
				v12 = *(_QWORD*)(v5 + 24);
				do
				{
					if ((*(_BYTE*)(v11 + v12) & 1) == 0)
						break;
					v11 = v8[1];
					v31 = ++v8;
				} while (v11 <= 0xFFu);
			}
			if (*v8 == 35)
			{
				v13 = v8[1];
				v31 = ++v8;
				if (!v13)
					continue;
				while (1)
				{
					v14 = *(_DWORD*)(v5 + 148);
					if (v14)
					{
						v15 = *(_QWORD*)(v5 + 56);
						if ((unsigned __int64)v8 < v15 && (unsigned int)sub_1409199E0(v8, v14, v15, (int*)(v5 + 152), a2))
							goto LABEL_11;
					}
					else if ((unsigned __int64)v8 <= *(_QWORD*)(v5 + 56) - 2i64 * *(int*)(v5 + 152)
						&& v13 == *(_WORD*)(v5 + 156)
						&& (*(_DWORD*)(v5 + 152) == 1 || v8[1] == *(_WORD*)(v5 + 158)))
					{
					LABEL_11:
						v8 += *(int*)(v5 + 152);
						v31 = v8;
						goto LABEL_2;
					}
					v31 = ++v8;
					if (a2)
					{
						if ((*v8 & 0xFC00) == 0xDC00)
							v31 = ++v8;
					}
					v13 = *v8;
					if (!*v8)
						goto LABEL_2;
				}
			}
			break;
		}
	}
	v16 = *v8;
	if (*v8 == 92)
	{
		v17 = *(_DWORD*)(v5 + 100);
		v18 = 0;
		v28 = 0;
		v19 = sub_140908E00(&v31, v29, &v28, v17, a4, 0);
		if (!v28)
		{
			v8 = v31;
			v20 = v29[0];
			goto LABEL_29;
		}
		return 0i64;
	}
	if (v16 <= 0xFFu && *(char*)(v16 + *(_QWORD*)(v5 + 24)) < 0)
		return 0i64;
	v18 = 0;
	v20 = v16;
	v19 = 0;
	if (a2)
	{
		++v8;
		if ((v16 & 0xFC00) != 55296)
			goto LABEL_30;
		v20 = (((v16 & 0x3FF) << 10) | *v8 & 0x3FF) + 0x10000;
	}
LABEL_29:
	++v8;
LABEL_30:
	if (v10)
	{
		do
		{
		LABEL_31:
			for (i = *v8; i <= 0xFFu; ++v8)
			{
				if ((*(_BYTE*)(i + *(_QWORD*)(v5 + 24)) & 1) == 0)
					break;
				i = v8[1];
			}
			if (*v8 != 35)
				goto LABEL_49;
			v22 = v8[1];
			++v8;
		} while (!v22);
		while (1)
		{
			v23 = *(_DWORD*)(v5 + 148);
			if (v23)
			{
				v24 = *(_QWORD*)(v5 + 56);
				if ((unsigned __int64)v8 < v24 && (unsigned int)sub_1409199E0(v8, v23, v24, (int*)(v5 + 152), a2))
					goto LABEL_39;
			}
			else if ((unsigned __int64)v8 <= *(_QWORD*)(v5 + 56) - 2i64 * *(int*)(v5 + 152)
				&& v22 == *(_WORD*)(v5 + 156)
				&& (*(_DWORD*)(v5 + 152) == 1 || v8[1] == *(_WORD*)(v5 + 158)))
			{
			LABEL_39:
				v8 += *(int*)(v5 + 152);
				goto LABEL_31;
			}
			++v8;
			if (a2 && (*v8 & 0xFC00) == 0xDC00)
				++v8;
			v22 = *v8;
			if (!*v8)
				goto LABEL_31;
		}
	}
LABEL_49:
	if (*v8 == 42 || *v8 == 63 || !(unsigned int)sub_140919950(v8, "{0,", 3))
		return 0i64;
	v25 = v32;
	if ((unsigned __int16)(v32 - 29) <= 3u)
	{
		v6 = *v30;
		if (a2)
		{
			if ((v6 & 0xFC00) == 55296)
			{
				v25 = v32;
				v6 = (((v6 & 0x3FF) << 10) | v30[1] & 0x3FF) + 0x10000;
			}
		}
	}
	if (v19)
	{
		switch (v25)
		{
		case 6:
			LOBYTE(v18) = v19 == 7;
			return v18;
		case 7:
			if (v19 > 0x15)
				goto LABEL_81;
			v27 = 2754112;
			goto LABEL_153;
		case 8:
			if (v19 > 0x15)
				goto LABEL_81;
			v27 = 2753024;
			goto LABEL_153;
		case 9:
			if (((v19 - 7) & 0xFFFFFFFA) != 0 || v19 == 12)
				goto LABEL_81;
			return 1i64;
		case 10:
			LOBYTE(v18) = ((v19 - 7) & 0xFFFFFFFB) == 0;
			return v18;
		case 11:
			if (v19 > 0x15)
				goto LABEL_81;
			v27 = 2754048;
			goto LABEL_153;
		case 17:
		case 21:
			if (v19 > 0x14)
				goto LABEL_81;
			v27 = 1050752;
			goto LABEL_153;
		case 18:
		LABEL_143:
			LOBYTE(v18) = v19 == 19;
			return v18;
		case 19:
			if (v19 > 0x15)
				goto LABEL_81;
			v27 = 2492800;
		LABEL_153:
			if (_bittest(&v27, v19))
				result = 1i64;
			else
				LABEL_81 :
				result = v18;
			break;
		case 20:
			LOBYTE(v18) = ((v19 - 17) & 0xFFFFFFFB) == 0;
			return v18;
		case 29:
		case 30:
			switch (v19)
			{
			case 6u:
				if ((unsigned int)v6 > 0xFF || (*(_BYTE*)(v6 + *(_QWORD*)(v5 + 24)) & 4) == 0)
					goto LABEL_81;
				return 1i64;
			case 7u:
				if ((unsigned int)v6 > 0xFF)
					goto LABEL_80;
				if ((*(_BYTE*)(v6 + *(_QWORD*)(v5 + 24)) & 4) != 0)
					goto LABEL_81;
				return 1i64;
			case 8u:
				if ((unsigned int)v6 > 0xFF || (*(_BYTE*)(v6 + *(_QWORD*)(v5 + 24)) & 1) == 0)
					goto LABEL_81;
				return 1i64;
			case 9u:
				if ((unsigned int)v6 > 0xFF)
					goto LABEL_80;
				if ((*(_BYTE*)(v6 + *(_QWORD*)(v5 + 24)) & 1) != 0)
					goto LABEL_81;
				return 1i64;
			case 0xAu:
				if ((unsigned int)v6 > 0xFF || (*(_BYTE*)(v6 + *(_QWORD*)(v5 + 24)) & 0x10) == 0)
					goto LABEL_81;
				return 1i64;
			case 0xBu:
				if ((unsigned int)v6 > 0xFF)
				{
				LABEL_80:
					v18 = 1;
					goto LABEL_81;
				}
				if ((*(_BYTE*)(v6 + *(_QWORD*)(v5 + 24)) & 0x10) != 0)
					goto LABEL_81;
				result = 1i64;
				break;
			case 0x12u:
			case 0x13u:
				if ((_DWORD)v6 != 6158
					&& (_DWORD)v6 != 9
					&& (_DWORD)v6 != 32
					&& (_DWORD)v6 != 160
					&& (_DWORD)v6 != 5760
					&& (unsigned int)(v6 - 0x2000) > 0xA
					&& (_DWORD)v6 != 8239
					&& (_DWORD)v6 != 8287
					&& (_DWORD)v6 != 12288)
				{
					goto LABEL_143;
				}
				LOBYTE(v18) = v19 != 19;
				return v18;
			case 0x14u:
			case 0x15u:
				if ((unsigned int)v6 >= 0xA
					&& ((unsigned int)v6 <= 0xD || (_DWORD)v6 == 133 || (unsigned int)(v6 - 8232) <= 1))
				{
					LOBYTE(v18) = v19 != 21;
					return v18;
				}
				else
				{
					LOBYTE(v18) = v19 == 21;
					return v18;
				}
			default:
				return 0i64;
			}
			return result;
		default:
			return 0i64;
		}
	}
	else
	{
		switch (v25)
		{
		case 6:
			if (v20 > 0xFF || (*(_BYTE*)(v20 + *(_QWORD*)(v5 + 24)) & 4) == 0)
				goto LABEL_81;
			return 1i64;
		case 7:
			if (v20 > 0xFF || (*(_BYTE*)(v20 + *(_QWORD*)(v5 + 24)) & 4) == 0)
				goto LABEL_80;
			goto LABEL_81;
		case 8:
			if (v20 > 0xFF || (*(_BYTE*)(v20 + *(_QWORD*)(v5 + 24)) & 1) == 0)
				goto LABEL_81;
			return 1i64;
		case 9:
			if (v20 > 0xFF)
				goto LABEL_80;
			if ((*(_BYTE*)(v20 + *(_QWORD*)(v5 + 24)) & 1) != 0)
				goto LABEL_81;
			result = 1i64;
			break;
		case 10:
			if (v20 > 0xFF || (*(_BYTE*)(v20 + *(_QWORD*)(v5 + 24)) & 0x10) == 0)
				goto LABEL_81;
			return 1i64;
		case 11:
			if (v20 > 0xFF)
				goto LABEL_80;
			if ((*(_BYTE*)(v20 + *(_QWORD*)(v5 + 24)) & 0x10) != 0)
				goto LABEL_81;
			result = 1i64;
			break;
		case 17:
		case 20:
		case 21:
			if (v20 >= 0xA && (v20 <= 0xD || v20 == 133 || v20 - 8232 <= 1))
			{
				LOBYTE(v18) = v25 == 20;
				return v18;
			}
			else
			{
				LOBYTE(v18) = v25 != 20;
				return v18;
			}
		case 18:
		case 19:
			if (v20 == 6158
				|| v20 == 9
				|| v20 == 32
				|| v20 == 160
				|| v20 == 5760
				|| v20 - 0x2000 <= 0xA
				|| v20 == 8239
				|| v20 == 8287
				|| v20 == 12288)
			{
				LOBYTE(v18) = v25 == 18;
				return v18;
			}
			else
			{
				LOBYTE(v18) = v25 != 18;
				return v18;
			}
		case 29:
			LOBYTE(v18) = (_DWORD)v6 != v20;
			return v18;
		case 30:
			if ((_DWORD)v6 == v20)
				return 0i64;
			if (a2)
			{
				if (v20 >= 0x80)
					LOBYTE(v18) = (_DWORD)v6 != -1;
				else
					LOBYTE(v18) = (_DWORD)v6 != *(unsigned __int8*)(*(_QWORD*)(v5 + 8) + v20);
				return v18;
			}
			else
			{
				if (v20 <= 0xFF)
					v20 = *(unsigned __int8*)(*(_QWORD*)(v5 + 8) + v20);
				LOBYTE(v18) = (_DWORD)v6 != v20;
				return v18;
			}
		case 31:
			goto LABEL_77;
		case 32:
			if ((_DWORD)v6 == v20)
			{
				result = 1i64;
			}
			else if (a2)
			{
				if (v20 >= 0x80)
					LOBYTE(v18) = (_DWORD)v6 == -1;
				else
					LOBYTE(v18) = (_DWORD)v6 == *(unsigned __int8*)(*(_QWORD*)(v5 + 8) + v20);
				result = v18;
			}
			else
			{
				if (v20 <= 0xFF)
					v20 = *(unsigned __int8*)(*(_QWORD*)(v5 + 8) + v20);
			LABEL_77:
				LOBYTE(v18) = (_DWORD)v6 == v20;
				result = v18;
			}
			break;
		default:
			return 0i64;
		}
	}
	return result;
}
// 140908420: using guessed type unsigned int var_44[3];

