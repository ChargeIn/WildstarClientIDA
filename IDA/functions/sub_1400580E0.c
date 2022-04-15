//----- (00000001400580E0) ----------------------------------------------------
void* __fastcall sub_1400580E0(__int64 a1, int a2)
{
	void* result; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx

	if (a2 > 0)
	{
		result = (void*)(*(_QWORD*)(a1 + 24) + 16i64 * (a2 - 1));
		if ((unsigned __int64)result < *(_QWORD*)(a1 + 16))
			return result;
		return &unk_140A12138;
	}
	if (a2 > -10000)
		return (void*)(*(_QWORD*)(a1 + 16) + 16i64 * a2);
	switch (a2)
	{
	case -10002:
		return (void*)(a1 + 120);
	case -10001:
		result = (void*)(a1 + 136);
		v4 = *(_QWORD*)(**(_QWORD**)(*(_QWORD*)(a1 + 40) + 8i64) + 24i64);
		*(_DWORD*)(a1 + 144) = 5;
		*(_QWORD*)(a1 + 136) = v4;
		break;
	case -10000:
		return (void*)(*(_QWORD*)(a1 + 32) + 160i64);
	default:
		v3 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8i64);
		if (-10002 - a2 > *(unsigned __int8*)(*(_QWORD*)v3 + 11i64))
			return &unk_140A12138;
		return (void*)(16i64 * (-10002 - a2 - 1) + *(_QWORD*)v3 + 40i64);
	}
	return result;
}

