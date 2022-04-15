//----- (00000001407E6F44) ----------------------------------------------------
__int64 __fastcall sub_1407E6F44(char* a1)
{
	_QWORD* v2; // rax
	_WORD** v3; // rbx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	WCHAR* v9; // rcx
	int v10; // esi
	__int16 v11; // dx
	__int64 v12; // rax
	__int64 v13; // rax
	WCHAR v14[64]; // [rsp+30h] [rbp-A8h] BYREF

	v2 = sub_1407E3D94();
	v3 = (_WORD**)(v2 + 40);
	if (!sub_1407E8688((__int64)a1, *((_DWORD*)v2 + 87) != 0 ? 7 : 4098, v14, 64))
		goto LABEL_2;
	if (!(unsigned int)sub_1407F0C28(v3[1], v14))
	{
		if (!sub_1407E8688((__int64)a1, *((_DWORD*)v3 + 6) != 0 ? 3 : 4097, v14, 64))
			goto LABEL_2;
		if ((unsigned int)sub_1407F0C28(*v3, v14))
		{
			if (((_BYTE)v3[2] & 2) == 0)
			{
				if (!*((_DWORD*)v3 + 5) || (unsigned int)sub_1407F0D9C(*v3, v14, *((int*)v3 + 5)))
				{
					if (((_BYTE)v3[2] & 1) == 0)
					{
						if (sub_1407E7464(a1))
						{
							*((_DWORD*)v3 + 4) |= 1u;
							v7 = sub_1407E6CA0(a1);
							if ((unsigned int)sub_1407E6D08((__int64)(v3 + 75), 85i64, a1, v7 + 1))
							{
								sub_1407DC390();
								__debugbreak();
							}
						}
					}
				}
				else
				{
					*((_DWORD*)v3 + 4) |= 2u;
					v6 = sub_1407E6CA0(a1);
					if ((unsigned int)sub_1407E6D08((__int64)(v3 + 75), 85i64, a1, v6 + 1))
					{
						sub_1407DC390();
						__debugbreak();
					}
				}
			}
		}
		else
		{
			*((_DWORD*)v3 + 4) |= 0x304u;
			v5 = sub_1407E6CA0(a1);
			if ((unsigned int)sub_1407E6D08((__int64)(v3 + 75), 85i64, a1, v5 + 1))
			{
				sub_1407DC390();
				__debugbreak();
			}
		}
	}
	if (((_DWORD)v3[2] & 0x300) != 768)
	{
		if (sub_1407E8688((__int64)a1, *((_DWORD*)v3 + 6) != 0 ? 3 : 4097, v14, 128))
		{
			if (!(unsigned int)sub_1407F0C28(*v3, v14))
			{
				*((_DWORD*)v3 + 4) |= 0x200u;
				if (*((_DWORD*)v3 + 6))
				{
					*((_DWORD*)v3 + 4) |= 0x100u;
					if (!*((_WORD*)v3 + 300))
					{
						v8 = sub_1407E6CA0(a1);
						if ((unsigned int)sub_1407E6D08((__int64)(v3 + 75), 85i64, a1, v8 + 1))
						{
							sub_1407DC390();
							__debugbreak();
						}
					}
				}
				else if (*((_DWORD*)v3 + 5) && (unsigned int)sub_1407E6CA0(*v3) == *((_DWORD*)v3 + 5))
				{
					if (sub_1407E7464(a1))
						goto LABEL_31;
					v9 = *v3;
					v10 = 0;
					if (*v3)
					{
						while (1)
						{
							v11 = *v9++;
							if ((unsigned __int16)(v11 - 65) > 0x19u && (unsigned __int16)(v11 - 97) > 0x19u)
								break;
							++v10;
						}
					}
					if (v10 != (unsigned int)sub_1407E6CA0(*v3))
					{
					LABEL_31:
						*((_DWORD*)v3 + 4) |= 0x100u;
						if (!*((_WORD*)v3 + 300))
						{
							v12 = sub_1407E6CA0(a1);
							if ((unsigned int)sub_1407E6D08((__int64)(v3 + 75), 85i64, a1, v12 + 1))
							{
								sub_1407DC390();
								__debugbreak();
							}
						}
					}
				}
				else
				{
					*((_DWORD*)v3 + 4) |= 0x100u;
					if (!*((_WORD*)v3 + 300))
					{
						v13 = sub_1407E6CA0(a1);
						if ((unsigned int)sub_1407E6D08((__int64)(v3 + 75), 85i64, a1, v13 + 1))
						{
							sub_1407DC390();
							JUMPOUT(0x1407E72CEi64);
						}
					}
				}
			}
			return ((_DWORD)v3[2] & 4) == 0;
		}
	LABEL_2:
		*((_DWORD*)v3 + 4) = 0;
		return 1i64;
	}
	return ((_DWORD)v3[2] & 4) == 0;
}
// 1407E72C9: control flows out of bounds to 1407E72CE
// 1407E6F44: using guessed type WCHAR var_A8[64];

