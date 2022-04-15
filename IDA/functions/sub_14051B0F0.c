//----- (000000014051B0F0) ----------------------------------------------------
__int64 __fastcall sub_14051B0F0(__int64 a1, _QWORD* a2)
{
	__int64 v2; // r9
	unsigned __int64 v4; // rdx
	unsigned int v5; // r8d
	__int64 v7; // r9
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rbx
	const char* v11; // r8
	__int64 v12; // rax
	unsigned int v13; // eax
	unsigned int v14; // ecx
	void(__fastcall * **v15)(_QWORD, __int64); // rcx
	int* v16; // rax
	__int64 result; // rax

	v2 = qword_140C63650;
	*(_QWORD*)(a1 + 16) = 0i64;
	v4 = *(_QWORD*)(v2 + 768);
	v5 = 0;
	if (v4)
	{
		v7 = *(_QWORD*)(v2 + 760);
		v8 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(v7 + 8 * v8) + 400i64) == a2)
				break;
			v8 = ++v5;
		} while (v5 < v4);
	}
	v9 = sub_140056AB0(a2, 3u);
	if (v9)
		v10 = *(_QWORD*)(v9 + 8);
	else
		v10 = 0i64;
	if (*(_QWORD*)(v10 + 8))
	{
		v11 = "Error posting: commodity order is already posted";
		goto LABEL_24;
	}
	if ((dword_140DC4AFC & 1) != 0)
	{
		v13 = dword_140DC4B00;
	}
	else
	{
		dword_140DC4AFC |= 1u;
		v12 = sub_140200220(0x439u);
		if (v12)
		{
			v13 = *(_DWORD*)(v12 + 12);
			dword_140DC4B00 = v13;
		}
		else
		{
			v13 = 200;
			dword_140DC4B00 = 200;
		}
	}
	v14 = *(_DWORD*)(v10 + 20);
	if (!v14 || v14 > v13 || *(__int64*)(v10 + 24) <= 0)
	{
		v11 = "Error posting: invalid commodity order";
	LABEL_24:
		sub_140056570(a2, 3u, v11);
	}
	v15 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 16);
	if (v15)
		(**v15)(v15, 1i64);
	v16 = sub_14018B280(64i64, 0);
	if (v16)
	{
		*(_QWORD*)v16 = off_140B6FFD0;
		*((_QWORD*)v16 + 1) = *(_QWORD*)(v10 + 8);
		*((_QWORD*)v16 + 2) = *(_QWORD*)(v10 + 16);
		*((_QWORD*)v16 + 3) = *(_QWORD*)(v10 + 24);
		*((_QWORD*)v16 + 4) = *(_QWORD*)(v10 + 32);
		*((_QWORD*)v16 + 5) = *(_QWORD*)(v10 + 40);
		*((_QWORD*)v16 + 6) = *(_QWORD*)(v10 + 48);
		*((_QWORD*)v16 + 7) = *(_QWORD*)(v10 + 56);
		*(_QWORD*)(a1 + 16) = v16;
		return 0i64;
	}
	else
	{
		result = 0i64;
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	return result;
}
// 140B6FFD0: using guessed type __int64 (__fastcall *off_140B6FFD0[2])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140DC4AFC: using guessed type int dword_140DC4AFC;
// 140DC4B00: using guessed type int dword_140DC4B00;

