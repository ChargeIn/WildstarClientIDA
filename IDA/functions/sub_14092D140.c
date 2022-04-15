//----- (000000014092D140) ----------------------------------------------------
char* __fastcall sub_14092D140(__int64 a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
	int v6; // edi
	int v7; // r13d
	unsigned int v8; // esi
	int v10; // ebx
	__int64 v11; // r14
	char* result; // rax
	int v13; // edx
	char v14; // bp
	int v15; // ebx
	int v16; // r15d
	__int64 v17; // rax
	char* v18; // r9
	char* v19; // r8
	char v20; // al
	int v21; // r11d
	char v22; // al
	_DWORD* v23; // r8
	int v24; // [rsp+70h] [rbp+18h]
	__int64 v25; // [rsp+78h] [rbp+20h]

	v25 = a4;
	v24 = a3;
	v6 = a5;
	v7 = a2 & 0xF;
	v8 = a2 & 0xFFFFFFF0;
	v10 = v7;
	if ((a5 & 0x100) == 0 || (a5 & 0xF0) != 0)
	{
		v11 = a6;
	}
	else
	{
		v11 = a6;
		if ((unsigned __int64)(a6 + 0x80000000i64) > 0xFFFFFFFF)
		{
			if ((unsigned int)sub_14092A980((_QWORD*)a1, 14, a6))
				return 0i64;
			a3 = v24;
			a4 = v25;
			v11 = 0i64;
			if ((a5 & 0xF) != 0)
				v6 = a5 | 0xE0;
			else
				v6 = a5 | 0xE;
		}
	}
	v13 = *(_DWORD*)(a1 + 104);
	if (v13 || (v8 & 0x80u) != 0)
	{
		v14 = 0;
		if ((v8 & 0x40) != 0)
			v14 = 64;
	}
	else
	{
		v14 = 72;
	}
	if ((v8 & 0x3000) != 0)
		v10 = v7 + 1;
	if ((v8 & 0x400) != 0)
		++v10;
	v15 = v10 + 1;
	if ((v6 & 0x100) != 0)
	{
		if ((v6 & 0xF) != 0)
		{
			if (byte_1409D00E0[v6 & 0xF] >= 8u)
				v14 |= 0x41u;
			if (v11 && (v6 & 0xF0) == 0)
			{
				if ((unsigned __int64)(v11 + 128) > 0xFF)
					v15 += 4;
				else
					++v15;
			}
		}
		else
		{
			v15 += 5;
		}
		if ((v6 & 0xF) == 11)
		{
			if ((v6 & 0xF0) != 0)
			{
			LABEL_33:
				++v15;
				if (byte_1409D00E0[((__int64)(unsigned int)v6 >> 4) & 0xF] >= 8u)
					v14 |= 0x42u;
				goto LABEL_38;
			}
			v6 |= 0xB0u;
		}
		if ((v6 & 0xF0) == 0)
			goto LABEL_38;
		goto LABEL_33;
	}
	if ((v8 & 0x800) == 0 && byte_1409D00E0[v6] >= 8u)
		v14 |= 0x41u;
LABEL_38:
	v16 = a3 & 0x200;
	if ((a3 & 0x200) != 0)
	{
		if ((v8 & 0x10) != 0)
		{
			if ((unsigned __int64)(a4 + 128) <= 0xFF)
			{
				++v15;
				v8 |= 0x100u;
				goto LABEL_55;
			}
		LABEL_51:
			v15 += 4;
			goto LABEL_55;
		}
		if ((v8 & 0x20) == 0)
		{
			if ((v8 & 0x100) != 0)
			{
				++v15;
				goto LABEL_55;
			}
			if ((v8 & 0x200) != 0)
			{
				v15 += 2;
				goto LABEL_55;
			}
			goto LABEL_51;
		}
		v17 = 63i64;
		if (v13)
			v17 = 31i64;
		v25 = v17 & a4;
		if ((v17 & a4) != 1)
		{
			++v15;
			v8 |= 0x100u;
		}
	}
	else if ((v8 & 0x800) == 0 && byte_1409D00E0[a3] >= 8u)
	{
		v14 |= 0x44u;
	}
LABEL_55:
	if (v14)
		++v15;
	result = (char*)sub_14092D610(a1, v15 + 1);
	if (result)
	{
		*result = v15;
		v18 = result + 1;
		*(_QWORD*)(a1 + 88) += v15;
		if ((v8 & 0x1000) != 0)
		{
			*v18 = -14;
			v18 = result + 2;
		}
		if ((v8 & 0x2000) != 0)
			*v18++ = -13;
		if ((v8 & 0x400) != 0)
			*v18++ = 102;
		if (v14)
			*v18++ = v14;
		v19 = &v18[v7];
		if ((v8 & 0x20) != 0)
		{
			if (v16)
			{
				v21 = v25;
				v22 = -63;
				if (v25 == 1)
					v22 = -47;
				*v18 = v22;
				goto LABEL_81;
			}
			*v18 = -45;
		}
		else
		{
			if ((v8 & 0x10) != 0)
			{
				if (!v16)
					goto LABEL_71;
				*v18 = (v8 >> 7) & 2 | 0x81;
			}
			if (!v16)
			{
			LABEL_71:
				v20 = v24;
				if (v24)
				{
					v21 = v25;
					if ((v8 & 0x800) == 0)
						v20 = byte_1409D00E0[v24 + 16];
					*v19 = 8 * v20;
				LABEL_82:
					if ((v6 & 0x100) != 0)
					{
						if ((v6 & 0xF) != 0)
						{
							if ((v6 & 0xF0) == 0 || (v6 & 0xF0) == 176)
							{
								if (v11)
								{
									if ((unsigned __int64)(v11 + 128) > 0xFF)
										*v19 |= 0x80u;
									else
										*v19 |= 0x40u;
								}
								if ((v6 & 0xF0) != 0)
								{
									*v19 |= 4u;
									v23 = v19 + 2;
									*((_BYTE*)v23 - 1) = byte_1409D00E0[(v6 & 0xF) + 16] | (8 * byte_1409D00E0[((v6 >> 4) & 0xF) + 16]);
								}
								else
								{
									*v19 |= byte_1409D00E0[(v6 & 0xF) + 16];
									v23 = v19 + 1;
								}
								if (v11)
								{
									if ((unsigned __int64)(v11 + 128) > 0xFF)
									{
										*v23++ = v11;
									}
									else
									{
										*(_BYTE*)v23 = v11;
										v23 = (_DWORD*)((char*)v23 + 1);
									}
								}
							}
							else
							{
								*v19 |= 4u;
								v23 = v19 + 2;
								*((_BYTE*)v23 - 1) = ((_BYTE)v11 << 6) | byte_1409D00E0[(v6 & 0xF) + 16] | (8
									* byte_1409D00E0[((v6 >> 4) & 0xF) + 16]);
							}
						}
						else
						{
							*v19 |= 4u;
							v19[1] = 37;
							*(_DWORD*)(v19 + 2) = v11;
							v23 = v19 + 6;
						}
					}
					else
					{
						if ((v8 & 0x800) == 0)
							LOBYTE(v6) = byte_1409D00E0[v6 + 16];
						*v19 |= v6 - 64;
						v23 = v19 + 1;
					}
					if (v16)
					{
						if ((v8 & 0x100) != 0)
						{
							*(_BYTE*)v23 = v21;
						}
						else if ((v8 & 0x200) != 0)
						{
							*(_WORD*)v23 = v21;
						}
						else
						{
							if ((v8 & 0x20) != 0)
								goto LABEL_110;
							*v23 = v21;
						}
					}
					if ((v8 & 0x20) == 0)
						return v18;
				LABEL_110:
					++v18;
					return v18;
				}
			}
		}
		v21 = v25;
	LABEL_81:
		*v19 = 0;
		goto LABEL_82;
	}
	return result;
}
// 1409D00E0: using guessed type _BYTE byte_1409D00E0[32];

