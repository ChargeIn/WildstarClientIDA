//----- (000000014084E860) ----------------------------------------------------
void __fastcall sub_14084E860(__int64 a1, unsigned int a2, int a3, _DWORD* a4)
{
	__int64 v6; // r11
	__int64 v7; // r10
	__int64 v8; // rdx
	bool v9; // zf
	unsigned int v10; // edx
	__int64 v11; // rax
	_QWORD* v12; // rdx
	_DWORD* v13; // rax
	_DWORD* v14; // rcx
	int* v15; // rax
	int v16; // ecx

	v6 = a2;
	if ((*(_BYTE*)(a1 + 91) & 0x40) != 0 || (v7 = *(_QWORD*)(a1 + 64)) == 0)
	{
		*a4 = -1;
		v8 = *(_QWORD*)(a1 + 48);
		if (v8)
		{
			v9 = *(_BYTE*)(v8 + 8 * v6 + 1) == 0;
			v10 = *(_DWORD*)(v8 + 8 * v6 + 4);
			v11 = v9
				? sub_14083EDE0(qword_140C61BA8 + 398, v10)
				: sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 14328), v10);
			v12 = (_QWORD*)v11;
			if (v11)
			{
				v13 = *(_DWORD**)(v11 + 48);
				v14 = (_DWORD*)v12[7];
				if (v13 == v14)
					goto LABEL_15;
				do
				{
					if (*v13 == a3)
						break;
					v13 += 2;
				} while (v13 != v14);
				if (v13 == v14 || (v15 = v13 + 1) == 0i64)
					LABEL_15:
				v16 = 0;
				else
					v16 = *v15;
				*a4 = v16;
				(*(void(__fastcall**)(_QWORD*))(*v12 + 16i64))(v12);
			}
		}
	}
	else
	{
		(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)v7 + 456i64))(*(_QWORD*)(a1 + 64), a2);
	}
}

