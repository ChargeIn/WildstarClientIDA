//----- (000000014082E2F0) ----------------------------------------------------
void __fastcall sub_14082E2F0(__int64 a1)
{
	__int64 v2; // rax
	unsigned __int16* v3; // rbx
	_DWORD* v4; // rcx

	EnterCriticalSection((LPCRITICAL_SECTION)a1);
	while (*(_DWORD*)(a1 + 68) != *(_DWORD*)(a1 + 76)
		|| *(_DWORD*)(a1 + 72) != *(_DWORD*)(a1 + 80)
		|| *(_BYTE*)(a1 + 84))
	{
		v2 = sub_1408296D0((__int64*)(a1 + 40));
		v3 = (unsigned __int16*)v2;
		switch (*(_WORD*)(v2 + 2))
		{
		case 1:
			sub_14083C260(qword_140C61B80, *(_DWORD*)(v2 + 16));
			(*(void(__fastcall**)(_QWORD))(**((_QWORD**)v3 + 6) + 16i64))(*((_QWORD*)v3 + 6));
			v4 = (_DWORD*)*((_QWORD*)v3 + 5);
			if (v4)
				sub_140828460(v4);
		LABEL_16:
			sub_140829780(a1 + 40, *v3);
			break;
		case 0xB:
			goto LABEL_16;
		case 0x17:
			if (*(_DWORD*)(v2 + 16) == 3)
			{
				sub_14083C260(qword_140C61B80, *(_DWORD*)(*(_QWORD*)(v2 + 8) + 136i64));
				(*(void(__fastcall**)(_QWORD))(**((_QWORD**)v3 + 1) + 16i64))(*((_QWORD*)v3 + 1));
			}
			(*(void(__fastcall**)(_QWORD))(**((_QWORD**)v3 + 1) + 16i64))(*((_QWORD*)v3 + 1));
			sub_140829780(a1 + 40, *v3);
			break;
		case 0x20:
		case 0x24:
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 8) + 16i64))(*(_QWORD*)(v2 + 8));
			sub_140829780(a1 + 40, *v3);
			break;
		default:
			goto LABEL_16;
		}
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)a1);
}
// 140C61B80: using guessed type __int64 qword_140C61B80;

