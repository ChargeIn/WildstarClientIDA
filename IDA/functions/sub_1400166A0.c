//----- (00000001400166A0) ----------------------------------------------------
void __fastcall sub_1400166A0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	_QWORD* v6; // r8
	__int64 v7; // rcx
	_QWORD* i; // rax

	if (!*(_DWORD*)(a1 + 5704) || qword_140C65898)
	{
		v2 = *(_QWORD*)(a1 + 5536);
		if (v2)
		{
			if (!*(_QWORD*)(v2 + 24))
			{
				*(_DWORD*)(v2 + 40) = 3;
				v3 = *(_QWORD*)(a1 + 5528);
				if (v3 && *(_QWORD*)(v3 + 24))
				{
					v4 = *(_QWORD*)(a1 + 5536);
					if (!*(_QWORD*)(v4 + 24))
					{
						v5 = *(_QWORD*)(v3 + 24);
						*(_QWORD*)(v4 + 32) = v3;
						*(_QWORD*)(v4 + 24) = v5;
						v6 = *(_QWORD**)(v4 + 24);
						if (v6)
							*v6 = v4;
						*(_QWORD*)(v3 + 24) = v4 + 32;
					}
				}
				else
				{
					v7 = *(_QWORD*)(a1 + 5536);
					if (!*(_QWORD*)(v7 + 24))
					{
						for (i = (_QWORD*)(a1 + 5552); *i; i = (_QWORD*)(*i + 32i64))
							;
						*(_QWORD*)(v7 + 24) = i;
						*(_QWORD*)(v7 + 32) = 0i64;
						*i = v7;
					}
				}
				(***(void(__fastcall****)(_QWORD))(a1 + 5536))(*(_QWORD*)(a1 + 5536));
			}
			sub_1400EA3E0(*(_QWORD*)(*(_QWORD*)(a1 + 5536) + 88i64), "OpenAddons", &unk_1409D0203);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

