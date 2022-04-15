//----- (0000000140858AF0) ----------------------------------------------------
void sub_140858AF0()
{
	__int128 v0; // rdi
	int v1; // r14d
	char v2; // r12
	_QWORD* v3; // r15
	unsigned __int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rdx
	int v7; // eax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rax
	__int128 v13; // [rsp+20h] [rbp-50h]
	__int128 v14; // [rsp+40h] [rbp-30h]
	__int128 v15; // [rsp+50h] [rbp-20h]
	__int128 v16; // [rsp+60h] [rbp-10h]

LABEL_1:
	v0 = (unsigned __int64)qword_140C62428;
	*((_QWORD*)&v13 + 1) = 0i64;
LABEL_2:
	*(_QWORD*)&v13 = v0;
LABEL_3:
	while ((_QWORD)v0)
	{
		v1 = *(_DWORD*)(v0 + 20);
		v2 = 0;
		v3 = (_QWORD*)*((_QWORD*)&v13 + 1);
		v4 = v13;
		do
		{
			if (v1 != *(_DWORD*)(v4 + 20))
				break;
			if (!*(_BYTE*)(v4 + 24) && *(_DWORD*)(v4 + 16) <= 1u)
			{
				v5 = *(_QWORD*)(v4 + 8);
				v6 = *(_QWORD*)(v5 + 184);
				if (*(_DWORD*)(v6 + 76) != 2)
				{
					v7 = sub_140833D70(v5, v6);
					if (v7 == 2)
					{
						if (v4 == qword_140C62428)
							qword_140C62428 = *(_QWORD*)v4;
						else
							*v3 = *(_QWORD*)v4;
						v12 = qword_140C62430;
						if (v4 == qword_140C62430)
							v12 = (__int64)v3;
						qword_140C62430 = v12;
						if (v4 < qword_140C62450 || v4 >= qword_140C62450 + 32 * (unsigned __int64)(unsigned int)qword_140C62440)
						{
							sub_140881720(dword_140C10F28, v4);
							--dword_140C62448;
						}
						else
						{
							*(_QWORD*)v4 = qword_140C62438;
							--dword_140C62448;
							qword_140C62438 = v4;
						}
						goto LABEL_1;
					}
					if (v7 == 63)
						v2 = 1;
					else
						*(_BYTE*)(v4 + 24) = 1;
				}
			}
			v3 = (_QWORD*)v4;
			v4 = *(_QWORD*)v4;
		} while (v4);
		if (v2)
		{
			while (1)
			{
				*((_QWORD*)&v0 + 1) = v0;
				*((_QWORD*)&v13 + 1) = v0;
				*(_QWORD*)&v0 = *(_QWORD*)v0;
				*(_QWORD*)&v13 = v0;
				if (!(_QWORD)v0)
					return;
				if (v1 != *(_DWORD*)(v0 + 20))
					goto LABEL_3;
			}
		}
		if (*(_BYTE*)(v0 + 24))
		{
			v8 = *(_QWORD*)(*(_QWORD*)(v0 + 8) + 184i64);
		}
		else
		{
			v8 = sub_140833330((__int64*)(v0 + 8));
			if (!v8)
			{
				*((_QWORD*)&v14 + 1) = *((_QWORD*)&v0 + 1);
				*(_QWORD*)&v14 = *(_QWORD*)v0;
				if ((_QWORD)v0 == qword_140C62428)
					qword_140C62428 = *(_QWORD*)v0;
				else
					**((_QWORD**)&v0 + 1) = *(_QWORD*)v0;
				v9 = qword_140C62430;
				if ((_QWORD)v0 == qword_140C62430)
					v9 = *((_QWORD*)&v0 + 1);
				qword_140C62430 = v9;
				if ((unsigned __int64)v0 < qword_140C62450
					|| (unsigned __int64)v0 >= qword_140C62450 + 32 * (unsigned __int64)(unsigned int)qword_140C62440)
				{
					sub_140881720(dword_140C10F28, v0);
				}
				else
				{
					*(_QWORD*)v0 = qword_140C62438;
					qword_140C62438 = v0;
				}
				--dword_140C62448;
				v13 = v14;
				v0 = v14;
				goto LABEL_3;
			}
		}
		if (*(_BYTE*)(v0 + 24))
		{
			switch (*(_DWORD*)(v0 + 16))
			{
			case 0:
				sub_140848C80(v8);
				break;
			case 1:
				sub_140848C80(v8);
				goto LABEL_35;
			case 2:
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
				break;
			case 3:
			LABEL_35:
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 24i64))(v8);
				break;
			case 4:
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 32i64))(v8);
				break;
			case 5:
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 40i64))(v8, *(_QWORD*)(v0 + 8));
				break;
			case 6:
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 48i64))(v8);
				break;
			default:
				break;
			}
			*((_QWORD*)&v15 + 1) = *((_QWORD*)&v0 + 1);
			*(_QWORD*)&v15 = *(_QWORD*)v0;
			if ((_QWORD)v0 == qword_140C62428)
				qword_140C62428 = *(_QWORD*)v0;
			else
				**((_QWORD**)&v0 + 1) = *(_QWORD*)v0;
			v10 = qword_140C62430;
			if ((_QWORD)v0 == qword_140C62430)
				v10 = *((_QWORD*)&v0 + 1);
			qword_140C62430 = v10;
			if ((unsigned __int64)v0 < qword_140C62450
				|| (unsigned __int64)v0 >= qword_140C62450 + 32 * (unsigned __int64)(unsigned int)qword_140C62440)
			{
				sub_140881720(dword_140C10F28, v0);
			}
			else
			{
				*(_QWORD*)v0 = qword_140C62438;
				qword_140C62438 = v0;
			}
			--dword_140C62448;
			v13 = v15;
			v0 = v15;
		}
		else
		{
			if (*(_DWORD*)(v0 + 16) != 2 || !v8)
			{
				*((_QWORD*)&v0 + 1) = v0;
				*((_QWORD*)&v13 + 1) = v0;
				*(_QWORD*)&v0 = *(_QWORD*)v0;
				goto LABEL_2;
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
			*(_QWORD*)&v16 = *(_QWORD*)v0;
			*((_QWORD*)&v16 + 1) = *((_QWORD*)&v0 + 1);
			if ((_QWORD)v0 == qword_140C62428)
				qword_140C62428 = *(_QWORD*)v0;
			else
				**((_QWORD**)&v0 + 1) = *(_QWORD*)v0;
			v11 = qword_140C62430;
			if ((_QWORD)v0 == qword_140C62430)
				v11 = *((_QWORD*)&v0 + 1);
			qword_140C62430 = v11;
			if ((unsigned __int64)v0 < qword_140C62450
				|| (unsigned __int64)v0 >= qword_140C62450 + 32 * (unsigned __int64)(unsigned int)qword_140C62440)
			{
				sub_140881720(dword_140C10F28, v0);
			}
			else
			{
				*(_QWORD*)v0 = qword_140C62438;
				qword_140C62438 = v0;
			}
			--dword_140C62448;
			v13 = v16;
			v0 = v16;
		}
	}
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C62428: using guessed type __int64 qword_140C62428;
// 140C62430: using guessed type __int64 qword_140C62430;
// 140C62438: using guessed type __int64 qword_140C62438;
// 140C62440: using guessed type __int64 qword_140C62440;
// 140C62448: using guessed type int dword_140C62448;
// 140C62450: using guessed type __int64 qword_140C62450;

