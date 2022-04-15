//----- (000000014083F1F0) ----------------------------------------------------
__int64 __fastcall sub_14083F1F0(__int64 a1, __int64 a2, __int64* a3, int a4, char a5)
{
	unsigned int v5; // r13d
	unsigned int v7; // r12d
	__int64* v8; // r15
	__int32 v10; // ecx
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // r14
	unsigned int v15; // ebx
	int v16; // r13d
	int v17; // r12d
	int v18; // r15d
	__int64 v19; // rdx
	unsigned int v20; // eax
	bool v21; // zf
	int v22; // eax
	bool v23; // r14
	unsigned int v24; // eax
	__int64* v25; // rcx
	__int64 v26; // r13
	int v27; // eax
	__int64 v28; // r9
	int* v29; // rsi
	__int64 v30; // rax
	int v31; // [rsp+28h] [rbp-48h]
	__m128i v32; // [rsp+30h] [rbp-40h] BYREF
	__int64 v33[2]; // [rsp+40h] [rbp-30h] BYREF
	int v34; // [rsp+50h] [rbp-20h]
	unsigned int v35; // [rsp+B0h] [rbp+40h] BYREF
	unsigned int v36; // [rsp+B8h] [rbp+48h]
	__int64* v37; // [rsp+C0h] [rbp+50h]
	int v38; // [rsp+C8h] [rbp+58h]

	v38 = a4;
	v37 = a3;
	v5 = *(_DWORD*)(a2 + 32);
	v7 = a4;
	v8 = a3;
	v36 = v5;
	EnterCriticalSection(&stru_140C62878);
	v10 = 0;
	if (*(_DWORD*)a2 <= 1u || (unsigned int)(*(_DWORD*)a2 - 6) <= 1)
		v10 = *(_DWORD*)(a2 + 32);
	if (*(_DWORD*)(a2 + 24) == 1)
		v11 = *(_QWORD*)(a2 + 40);
	else
		v11 = 0i64;
	v32.m128i_i32[0] = v10;
	v32.m128i_i64[1] = v11;
	v12 = sub_140868CC0(a1 + 1776, &v32);
	v13 = v12;
	if (v12 && (*(_BYTE*)(v12 + 120) & 1) != 0)
	{
		LeaveCriticalSection(&stru_140C62878);
		return 69i64;
	}
	v15 = 1;
	LeaveCriticalSection(&stru_140C62878);
	if (v13)
	{
		v21 = a5 == 0;
		*v8 = v13;
		if (!v21)
			++* (_DWORD*)(v13 + 124);
	}
	else
	{
		v16 = HIDWORD(qword_140C61B18);
		v17 = 0;
		v18 = 0;
		if (v38)
		{
			if (a5)
				v18 = 1;
			else
				v17 = 1;
		}
		else
		{
			v16 = *(_DWORD*)(a2 + 36);
			LODWORD(v13) = 1;
		}
		v19 = sub_1408819F0(dword_140C10F20, 128i64);
		if (v19)
		{
			v20 = v36;
			*(_DWORD*)(v19 + 44) = v16;
			*(_DWORD*)(v19 + 24) = v20;
			*(_QWORD*)(v19 + 32) = 0i64;
			*(_DWORD*)(v19 + 40) = 0;
			*(_BYTE*)(v19 + 48) = 0;
			*(_QWORD*)(v19 + 52) = 0i64;
			*(_QWORD*)(v19 + 64) = 0i64;
			*(_QWORD*)(v19 + 72) = 0i64;
			*(_QWORD*)(v19 + 80) = 0i64;
			*(_QWORD*)(v19 + 88) = 0i64;
			*(_QWORD*)(v19 + 96) = 0i64;
			*(_DWORD*)(v19 + 104) = 0;
			*(_DWORD*)(v19 + 116) = v18 + v17;
			LOBYTE(v20) = *(_BYTE*)(v19 + 120) & 0xF0;
			*(_DWORD*)(v19 + 112) = v13;
			*(_DWORD*)(v19 + 124) = v18;
			*(_BYTE*)(v19 + 120) = v20 | ((_DWORD)v13 != 0);
		}
		else
		{
			v19 = 0i64;
		}
		v8 = v37;
		v7 = v38;
		v5 = v36;
		*v37 = v19;
		if (!v19)
			v15 = 52;
	}
	sub_14083C770((__int64*)a1);
	v22 = *(_DWORD*)(a2 + 24);
	v23 = v22 == 1;
	if (v15 != 1)
		goto LABEL_33;
	if (v7)
		goto LABEL_28;
	if (v22 == 2)
	{
	LABEL_31:
		LOBYTE(v31) = 1;
		v24 = sub_14083C790(a1, v5, 0, 0, *(_QWORD*)(a2 + 16), v31);
		goto LABEL_32;
	}
	if (v22 != 1)
	{
	LABEL_28:
		v25 = *(__int64**)(a1 + 8i64 * (v5 % 0x1F) + 2040);
		if (v25)
		{
			while (*((_DWORD*)v25 + 2) != v5)
			{
				v25 = (__int64*)*v25;
				if (!v25)
					goto LABEL_31;
			}
			if (v25 != (__int64*)-16i64)
			{
				v24 = sub_14083C930(a1, (const CHAR*)v25[2], 0, *(_QWORD*)(a2 + 16));
				goto LABEL_32;
			}
		}
		goto LABEL_31;
	}
	v24 = sub_14083CAF0(a1, *(_QWORD*)(a2 + 40), *(_DWORD*)(a2 + 48));
LABEL_32:
	v15 = v24;
LABEL_33:
	v33[0] = 0i64;
	v33[1] = 0i64;
	v34 = 0;
	if (v15 == 1)
		v15 = sub_140840CF0(a1, (int*)v33);
	v26 = 0i64;
	if (!*(_BYTE*)(a1 + 208))
		v26 = sub_14086EDB0();
	while (v15 == 1)
	{
		v35 = 0;
		v27 = sub_14083C410(a1, v32.m128i_i32, 8u, &v35);
		v15 = v27;
		if (v27 != 1)
			break;
		if (v35 != 8)
		{
			if (v35)
				v27 = 7;
			v15 = v27;
			break;
		}
		if (v32.m128i_i32[0] > 0x474D5453u)
		{
			if (v32.m128i_i32[0] == 1398165061)
			{
				v15 = sub_140840E90(a1, v32.m128i_i32[1]);
			}
			else
			{
				if (v32.m128i_i32[0] != 1480870212)
					goto LABEL_61;
				if (v7 < 2)
					goto LABEL_66;
				if (v7 == 2)
					goto LABEL_61;
				if (v7 == 3)
					LABEL_66:
				v15 = sub_14083F940(a1, *v8, v32.m128i_u32[1], v23);
			}
		}
		else
		{
			switch (v32.m128i_i32[0])
			{
			case 0x474D5453:
				v15 = sub_140841040(a1, v32.m128i_i32[1]);
				break;
			case 0x41544144:
				if (v7)
				{
					switch (v7)
					{
					case 1u:
						goto LABEL_53;
					case 2u:
						goto LABEL_61;
					case 3u:
					LABEL_53:
						v15 = sub_1408407B0(a1, *v8, v32.m128i_u32[1], v28);
						break;
					}
				}
				else
				{
					if (v23)
					{
						v29 = sub_14083C610(a1, v32.m128i_u32[1]);
						sub_14083C740(a1);
					}
					else
					{
						v15 = sub_140840DA0(a1, v32.m128i_u32[1], *v8);
						v29 = *(int**)(*v8 + 32);
						if (v15 != 1)
							goto LABEL_71;
					}
					v15 = sub_14083F790(a1, (__int64)v29, *v8);
				}
				break;
			case 0x43524948:
				v15 = sub_1408413C0(a1, *v8, v36);
				break;
			case 0x44495453:
				v15 = sub_140841750(a1, v32.m128i_i32[1]);
				break;
			default:
			LABEL_61:
				sub_14083CB00(a1, v32.m128i_u32[1], &v35, v28);
				if (v35 != v32.m128i_i32[1])
				{
					v15 = 7;
					goto LABEL_71;
				}
				break;
			}
		}
	}
LABEL_71:
	if (v26)
	{
		v30 = sub_14086F180();
		if (v30)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 16i64))(v30);
		else
			sub_14086F270(v26);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 16i64))(v26);
	}
	sub_14083C3D0(a1);
	return v15;
}
// 14083F41E: variable 'v31' is possibly undefined
// 14083F53A: variable 'v28' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B18: using guessed type __int64 qword_140C61B18;

