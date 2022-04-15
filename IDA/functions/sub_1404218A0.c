#include "../winhttp.h"

//----- (00000001404218A0) ----------------------------------------------------
__int64 __fastcall sub_1404218A0(__int64 a1)
{
	int* v2; // rax
	int v3; // eax
	int v4; // edx
	int v5; // ecx
	int* v6; // rax
	int* v7; // rax
	int v8; // eax
	int* v9; // rax
	int* v10; // rax
	int* v11; // rax
	int* v12; // rax
	int* v13; // rax
	int* v14; // rax
	int* v15; // rax
	int* v16; // rax
	int* v17; // rax
	int* v18; // rax
	int* v19; // rax
	int* v20; // rax
	int* v21; // rax
	int* v22; // rax
	int* v23; // rax
	int* v24; // rax
	int* v25; // rax
	int* v26; // rax
	int* v27; // rax
	int* v28; // rax
	int* v29; // rax
	int* v30; // rax
	int* v31; // rax
	int* v32; // rax
	int* v33; // rax
	int* v34; // rax
	int* v35; // rax
	int* v36; // rax
	int* v37; // rax
	int* v38; // rax
	int* v39; // rax
	int* v40; // rax
	int* v41; // rax
	int* v42; // rax
	int* v43; // rax
	int* v44; // rax
	int* v45; // rax
	int* v46; // rcx
	__int64 v47; // rdx
	__int64 v48; // r10
	__int64* v49; // r9
	__int64 v50; // rax
	int** v51; // r8
	__int64 v52; // rax

	sub_1400E2EF0(
		a1,
		(__m128i*)L"UI\\Assets\\Docs\\General\\ApolloFonts.xml",
		(__m128i*)L"UI\\Assets\\Docs\\General\\ApolloCursors.xml",
		(__int64)L"GameMgr",
		(__int64)sub_140422F30);
	*(_QWORD*)a1 = off_140B66DF0;
	*(_DWORD*)(a1 + 3632) = 0;
	*(_DWORD*)(a1 + 3648) = 0;
	*(_QWORD*)(a1 + 3656) = 0i64;
	*(_QWORD*)(a1 + 3664) = 0i64;
	*(_BYTE*)(a1 + 3672) = 0;
	*(_QWORD*)(a1 + 3640) = off_140B702F0;
	*(_QWORD*)(a1 + 3688) = 0i64;
	*(_QWORD*)(a1 + 3696) = 0i64;
	*(_QWORD*)(a1 + 3704) = 0i64;
	v2 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 3688) = v2;
	*(_QWORD*)(a1 + 3696) = v2;
	*(_QWORD*)(a1 + 3704) = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	*(_QWORD*)(a1 + 3712) = 0i64;
	*(_DWORD*)(a1 + 3724) = 0;
	*(_DWORD*)(a1 + 3728) = 200;
	*(_DWORD*)(a1 + 3732) = 1;
	*(_DWORD*)(a1 + 3736) = 200;
	v3 = dword_140C636A8;
	v4 = dword_140C636A8 - 200;
	*(_DWORD*)(a1 + 3720) = dword_140C636A8 - 200;
	*(_DWORD*)(a1 + 3744) = 0;
	*(_QWORD*)(a1 + 3760) = sub_140427D20;
	*(_QWORD*)(a1 + 3752) = a1;
	*(_QWORD*)(a1 + 3768) = 0i64;
	*(_DWORD*)(a1 + 3776) = 4;
	*(_QWORD*)(a1 + 3800) = 0i64;
	*(_QWORD*)(a1 + 3808) = 0i64;
	*(_QWORD*)(a1 + 3824) = 0i64;
	*(_QWORD*)(a1 + 3832) = 0i64;
	*(_DWORD*)(a1 + 3784) = 1414420037;
	*(_DWORD*)(a1 + 3852) = 13;
	*(_DWORD*)(a1 + 3860) = 0;
	*(_DWORD*)(a1 + 3864) = 50;
	*(_DWORD*)(a1 + 3868) = 1;
	*(_DWORD*)(a1 + 3872) = 50;
	v5 = v3 - 50;
	*(_DWORD*)(a1 + 3856) = v3 - 50;
	*(_DWORD*)(a1 + 3880) = 0;
	*(_QWORD*)(a1 + 3896) = sub_140426610;
	*(_QWORD*)(a1 + 3888) = a1;
	*(_QWORD*)(a1 + 3904) = 0i64;
	*(_DWORD*)(a1 + 3912) = 4;
	*(_QWORD*)(a1 + 3936) = 0i64;
	*(_QWORD*)(a1 + 3944) = 0i64;
	*(_QWORD*)(a1 + 3960) = 0i64;
	*(_QWORD*)(a1 + 3968) = 0i64;
	*(_DWORD*)(a1 + 3920) = 1414420037;
	*(_DWORD*)(a1 + 3988) = 13;
	*(_DWORD*)(a1 + 3996) = 0;
	*(_DWORD*)(a1 + 4000) = 50;
	*(_DWORD*)(a1 + 4004) = 1;
	*(_DWORD*)(a1 + 3992) = v3 - 50;
	*(_DWORD*)(a1 + 4008) = 50;
	*(_DWORD*)(a1 + 4016) = 0;
	*(_QWORD*)(a1 + 4024) = a1;
	*(_QWORD*)(a1 + 4032) = sub_140426AA0;
	*(_QWORD*)(a1 + 4040) = 0i64;
	*(_DWORD*)(a1 + 4048) = 4;
	*(_QWORD*)(a1 + 4072) = 0i64;
	*(_QWORD*)(a1 + 4080) = 0i64;
	*(_QWORD*)(a1 + 4096) = 0i64;
	*(_QWORD*)(a1 + 4104) = 0i64;
	*(_DWORD*)(a1 + 4056) = 1414420037;
	*(_DWORD*)(a1 + 4124) = 13;
	*(_DWORD*)(a1 + 4132) = 0;
	*(_DWORD*)(a1 + 4136) = 50;
	*(_DWORD*)(a1 + 4140) = 1;
	*(_DWORD*)(a1 + 4128) = v3 - 50;
	*(_DWORD*)(a1 + 4144) = 50;
	*(_DWORD*)(a1 + 4152) = 0;
	*(_QWORD*)(a1 + 4160) = a1;
	*(_QWORD*)(a1 + 4168) = sub_140426B00;
	*(_QWORD*)(a1 + 4176) = 0i64;
	*(_DWORD*)(a1 + 4184) = 4;
	*(_QWORD*)(a1 + 4208) = 0i64;
	*(_QWORD*)(a1 + 4216) = 0i64;
	*(_QWORD*)(a1 + 4232) = 0i64;
	*(_QWORD*)(a1 + 4240) = 0i64;
	*(_DWORD*)(a1 + 4192) = 1414420037;
	*(_DWORD*)(a1 + 4260) = 13;
	*(_DWORD*)(a1 + 4268) = 0;
	*(_DWORD*)(a1 + 4272) = 200;
	*(_DWORD*)(a1 + 4276) = 1;
	*(_DWORD*)(a1 + 4264) = v4;
	*(_DWORD*)(a1 + 4280) = 200;
	*(_DWORD*)(a1 + 4288) = 0;
	*(_QWORD*)(a1 + 4296) = a1;
	*(_QWORD*)(a1 + 4304) = sub_140426B20;
	*(_QWORD*)(a1 + 4312) = 0i64;
	*(_DWORD*)(a1 + 4320) = 4;
	*(_QWORD*)(a1 + 4344) = 0i64;
	*(_QWORD*)(a1 + 4352) = 0i64;
	*(_QWORD*)(a1 + 4368) = 0i64;
	*(_QWORD*)(a1 + 4376) = 0i64;
	*(_DWORD*)(a1 + 4328) = 1414420037;
	*(_DWORD*)(a1 + 4396) = 13;
	*(_DWORD*)(a1 + 4404) = 0;
	*(_DWORD*)(a1 + 4408) = 50;
	*(_DWORD*)(a1 + 4412) = 1;
	*(_DWORD*)(a1 + 4400) = v3 - 50;
	*(_DWORD*)(a1 + 4416) = 50;
	*(_DWORD*)(a1 + 4424) = 0;
	*(_QWORD*)(a1 + 4432) = a1;
	v3 -= 1000;
	*(_QWORD*)(a1 + 4440) = sub_140426B40;
	*(_QWORD*)(a1 + 4448) = 0i64;
	*(_DWORD*)(a1 + 4456) = 4;
	*(_QWORD*)(a1 + 4480) = 0i64;
	*(_QWORD*)(a1 + 4488) = 0i64;
	*(_QWORD*)(a1 + 4504) = 0i64;
	*(_QWORD*)(a1 + 4512) = 0i64;
	*(_DWORD*)(a1 + 4464) = 1414420037;
	*(_DWORD*)(a1 + 4532) = 13;
	*(_DWORD*)(a1 + 4540) = 0;
	*(_DWORD*)(a1 + 4544) = 1000;
	*(_DWORD*)(a1 + 4548) = 1;
	*(_DWORD*)(a1 + 4536) = v3;
	*(_DWORD*)(a1 + 4552) = 1000;
	*(_DWORD*)(a1 + 4560) = 0;
	*(_QWORD*)(a1 + 4568) = a1;
	*(_QWORD*)(a1 + 4576) = sub_140426BA0;
	*(_QWORD*)(a1 + 4584) = 0i64;
	*(_DWORD*)(a1 + 4592) = 4;
	*(_QWORD*)(a1 + 4616) = 0i64;
	*(_QWORD*)(a1 + 4624) = 0i64;
	*(_QWORD*)(a1 + 4640) = 0i64;
	*(_QWORD*)(a1 + 4648) = 0i64;
	*(_DWORD*)(a1 + 4600) = 1414420037;
	*(_DWORD*)(a1 + 4668) = 13;
	*(_DWORD*)(a1 + 4676) = 0;
	*(_DWORD*)(a1 + 4680) = 50;
	*(_DWORD*)(a1 + 4684) = 1;
	*(_DWORD*)(a1 + 4672) = v5;
	*(_DWORD*)(a1 + 4688) = 50;
	*(_DWORD*)(a1 + 4696) = 0;
	*(_QWORD*)(a1 + 4704) = a1;
	*(_QWORD*)(a1 + 4712) = sub_140429790;
	*(_QWORD*)(a1 + 4720) = 0i64;
	*(_DWORD*)(a1 + 4728) = 4;
	*(_QWORD*)(a1 + 4752) = 0i64;
	*(_QWORD*)(a1 + 4760) = 0i64;
	*(_QWORD*)(a1 + 4776) = 0i64;
	*(_QWORD*)(a1 + 4784) = 0i64;
	*(_DWORD*)(a1 + 4736) = 1414420037;
	*(_DWORD*)(a1 + 4804) = 13;
	*(_DWORD*)(a1 + 4812) = 0;
	*(_DWORD*)(a1 + 4816) = 200;
	*(_DWORD*)(a1 + 4820) = 1;
	*(_DWORD*)(a1 + 4808) = v4;
	*(_DWORD*)(a1 + 4824) = 200;
	*(_DWORD*)(a1 + 4832) = 0;
	*(_QWORD*)(a1 + 4840) = a1;
	*(_QWORD*)(a1 + 4848) = sub_1404297C0;
	*(_QWORD*)(a1 + 4856) = 0i64;
	*(_DWORD*)(a1 + 4864) = 4;
	*(_QWORD*)(a1 + 4888) = 0i64;
	*(_QWORD*)(a1 + 4896) = 0i64;
	*(_QWORD*)(a1 + 4912) = 0i64;
	*(_QWORD*)(a1 + 4920) = 0i64;
	*(_DWORD*)(a1 + 4872) = 1414420037;
	*(_DWORD*)(a1 + 4940) = 13;
	*(_DWORD*)(a1 + 4948) = 0;
	*(_DWORD*)(a1 + 4952) = 1000;
	*(_DWORD*)(a1 + 4956) = 1;
	*(_DWORD*)(a1 + 4944) = v3;
	*(_DWORD*)(a1 + 4960) = 1000;
	*(_DWORD*)(a1 + 4968) = 0;
	*(_QWORD*)(a1 + 4976) = a1;
	*(_QWORD*)(a1 + 4984) = sub_14042FF30;
	*(_QWORD*)(a1 + 4992) = 0i64;
	*(_DWORD*)(a1 + 5000) = 4;
	*(_QWORD*)(a1 + 5024) = 0i64;
	*(_QWORD*)(a1 + 5032) = 0i64;
	*(_QWORD*)(a1 + 5048) = 0i64;
	*(_QWORD*)(a1 + 5056) = 0i64;
	*(_DWORD*)(a1 + 5008) = 1414420037;
	*(_DWORD*)(a1 + 5076) = 13;
	*(_DWORD*)(a1 + 5084) = 0;
	*(_DWORD*)(a1 + 5088) = 1000;
	*(_DWORD*)(a1 + 5092) = 1;
	*(_DWORD*)(a1 + 5080) = v3;
	*(_DWORD*)(a1 + 5096) = 1000;
	*(_DWORD*)(a1 + 5104) = 0;
	*(_QWORD*)(a1 + 5112) = a1;
	*(_QWORD*)(a1 + 5120) = sub_14042FF10;
	*(_QWORD*)(a1 + 5128) = 0i64;
	*(_DWORD*)(a1 + 5136) = 4;
	*(_QWORD*)(a1 + 5160) = 0i64;
	*(_QWORD*)(a1 + 5168) = 0i64;
	*(_QWORD*)(a1 + 5184) = 0i64;
	*(_QWORD*)(a1 + 5192) = 0i64;
	*(_DWORD*)(a1 + 5144) = 1414420037;
	*(_DWORD*)(a1 + 5212) = 13;
	*(_DWORD*)(a1 + 5220) = 0;
	*(_DWORD*)(a1 + 5224) = 200;
	*(_DWORD*)(a1 + 5228) = 1;
	*(_DWORD*)(a1 + 5216) = v4;
	*(_DWORD*)(a1 + 5232) = 200;
	*(_DWORD*)(a1 + 5240) = 0;
	*(_QWORD*)(a1 + 5248) = a1;
	*(_QWORD*)(a1 + 5256) = sub_140430DE0;
	*(_QWORD*)(a1 + 5264) = 0i64;
	*(_DWORD*)(a1 + 5272) = 4;
	*(_QWORD*)(a1 + 5296) = 0i64;
	*(_QWORD*)(a1 + 5304) = 0i64;
	*(_QWORD*)(a1 + 5320) = 0i64;
	*(_QWORD*)(a1 + 5328) = 0i64;
	*(_DWORD*)(a1 + 5280) = 1414420037;
	*(_DWORD*)(a1 + 5348) = 13;
	*(_DWORD*)(a1 + 5356) = 0;
	*(_DWORD*)(a1 + 5360) = 200;
	*(_DWORD*)(a1 + 5364) = 1;
	*(_DWORD*)(a1 + 5352) = v4;
	*(_DWORD*)(a1 + 5368) = 200;
	*(_DWORD*)(a1 + 5376) = 0;
	*(_QWORD*)(a1 + 5384) = a1;
	*(_QWORD*)(a1 + 5392) = sub_140430F60;
	*(_QWORD*)(a1 + 5400) = 0i64;
	*(_DWORD*)(a1 + 5408) = 4;
	*(_QWORD*)(a1 + 5432) = 0i64;
	*(_QWORD*)(a1 + 5440) = 0i64;
	*(_QWORD*)(a1 + 5456) = 0i64;
	*(_QWORD*)(a1 + 5464) = 0i64;
	*(_DWORD*)(a1 + 5416) = 1414420037;
	*(_DWORD*)(a1 + 5484) = 13;
	*(_DWORD*)(a1 + 5492) = 0;
	*(_DWORD*)(a1 + 5496) = 1000;
	*(_DWORD*)(a1 + 5500) = 1;
	*(_DWORD*)(a1 + 5488) = v3;
	*(_DWORD*)(a1 + 5504) = 1000;
	*(_DWORD*)(a1 + 5512) = 0;
	*(_QWORD*)(a1 + 5520) = a1;
	*(_QWORD*)(a1 + 5528) = sub_140426910;
	*(_QWORD*)(a1 + 5536) = 0i64;
	*(_DWORD*)(a1 + 5544) = 4;
	*(_QWORD*)(a1 + 5568) = 0i64;
	*(_QWORD*)(a1 + 5576) = 0i64;
	*(_QWORD*)(a1 + 5592) = 0i64;
	*(_QWORD*)(a1 + 5600) = 0i64;
	*(_DWORD*)(a1 + 5552) = 1414420037;
	*(_DWORD*)(a1 + 5620) = 13;
	*(_DWORD*)(a1 + 5624) = v5;
	*(_DWORD*)(a1 + 5628) = 0;
	*(_DWORD*)(a1 + 5632) = 50;
	*(_DWORD*)(a1 + 5636) = 1;
	*(_DWORD*)(a1 + 5640) = 50;
	*(_DWORD*)(a1 + 5648) = 0;
	*(_QWORD*)(a1 + 5656) = a1;
	*(_QWORD*)(a1 + 5664) = sub_140426A80;
	*(_QWORD*)(a1 + 5672) = 0i64;
	*(_DWORD*)(a1 + 5680) = 4;
	*(_QWORD*)(a1 + 5704) = 0i64;
	*(_QWORD*)(a1 + 5712) = 0i64;
	*(_QWORD*)(a1 + 5728) = 0i64;
	*(_QWORD*)(a1 + 5736) = 0i64;
	*(_DWORD*)(a1 + 5688) = 1414420037;
	*(_DWORD*)(a1 + 5756) = 13;
	*(_DWORD*)(a1 + 5760) = v3;
	*(_DWORD*)(a1 + 5764) = 0;
	*(_DWORD*)(a1 + 5768) = 1000;
	*(_DWORD*)(a1 + 5772) = 1;
	*(_DWORD*)(a1 + 5776) = 1000;
	*(_DWORD*)(a1 + 5784) = 0;
	*(_QWORD*)(a1 + 5792) = a1;
	*(_QWORD*)(a1 + 5800) = sub_14042D210;
	*(_QWORD*)(a1 + 5808) = 0i64;
	*(_DWORD*)(a1 + 5816) = 4;
	*(_QWORD*)(a1 + 5840) = 0i64;
	*(_QWORD*)(a1 + 5848) = 0i64;
	*(_QWORD*)(a1 + 5864) = 0i64;
	*(_QWORD*)(a1 + 5872) = 0i64;
	*(_DWORD*)(a1 + 5824) = 1414420037;
	*(_DWORD*)(a1 + 5892) = 13;
	*(_DWORD*)(a1 + 5896) = v4;
	*(_DWORD*)(a1 + 5900) = 0;
	*(_DWORD*)(a1 + 5904) = 200;
	*(_DWORD*)(a1 + 5908) = 1;
	*(_DWORD*)(a1 + 5912) = 200;
	*(_DWORD*)(a1 + 5920) = 0;
	*(_QWORD*)(a1 + 5928) = a1;
	*(_QWORD*)(a1 + 5936) = sub_140431280;
	*(_QWORD*)(a1 + 5944) = 0i64;
	*(_DWORD*)(a1 + 5952) = 4;
	*(_QWORD*)(a1 + 5976) = 0i64;
	*(_QWORD*)(a1 + 5984) = 0i64;
	*(_QWORD*)(a1 + 6000) = 0i64;
	*(_QWORD*)(a1 + 6008) = 0i64;
	*(_DWORD*)(a1 + 5960) = 1414420037;
	*(_DWORD*)(a1 + 6028) = 13;
	v6 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 6048) = 0i64;
	*(_QWORD*)(a1 + 6040) = v6;
	*(_BYTE*)v6 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 6040) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 6040) + 16i64) = *(_QWORD*)(a1 + 6040);
	*(_QWORD*)(*(_QWORD*)(a1 + 6040) + 24i64) = *(_QWORD*)(a1 + 6040);
	v7 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 6080) = 0i64;
	*(_QWORD*)(a1 + 6072) = v7;
	*(_BYTE*)v7 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 6072) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 6072) + 16i64) = *(_QWORD*)(a1 + 6072);
	*(_QWORD*)(*(_QWORD*)(a1 + 6072) + 24i64) = *(_QWORD*)(a1 + 6072);
	*(_DWORD*)(a1 + 2568) = 16;
	*(_QWORD*)(a1 + 2504) = a1;
	sub_1400E9C20(a1, (__int64)&off_140C57760, 1);
	v8 = *(_DWORD*)(a1 + 60);
	if (v8 > 1366)
		v8 = 1366;
	*(_DWORD*)(a1 + 56) = v8;
	v9 = sub_14018B280(8i64, 0);
	if (v9)
		*(_QWORD*)v9 = off_140B66DD8;
	else
		v9 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v9);
	v10 = sub_14018B280(8i64, 0);
	if (v10)
		*(_QWORD*)v10 = off_140B66DA8;
	else
		v10 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v10);
	v11 = sub_14018B280(8i64, 0);
	if (v11)
		*(_QWORD*)v11 = off_140B66DC0;
	else
		v11 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v11);
	v12 = sub_14018B280(8i64, 0);
	if (v12)
		*(_QWORD*)v12 = off_140B66D18;
	else
		v12 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v12);
	v13 = sub_14018B280(8i64, 0);
	if (v13)
		*(_QWORD*)v13 = off_140B66D30;
	else
		v13 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v13);
	v14 = sub_14018B280(8i64, 0);
	if (v14)
		*(_QWORD*)v14 = off_140B66CE8;
	else
		v14 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v14);
	v15 = sub_14018B280(8i64, 0);
	if (v15)
		*(_QWORD*)v15 = off_140B66D00;
	else
		v15 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v15);
	v16 = sub_14018B280(8i64, 0);
	if (v16)
		*(_QWORD*)v16 = off_140B66D78;
	else
		v16 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v16);
	v17 = sub_14018B280(8i64, 0);
	if (v17)
		*(_QWORD*)v17 = off_140B66D90;
	else
		v17 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v17);
	v18 = sub_14018B280(8i64, 0);
	if (v18)
		*(_QWORD*)v18 = off_140B66D48;
	else
		v18 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v18);
	v19 = sub_14018B280(8i64, 0);
	if (v19)
		*(_QWORD*)v19 = off_140B66D60;
	else
		v19 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v19);
	v20 = sub_14018B280(8i64, 0);
	if (v20)
		*(_QWORD*)v20 = off_140B66C58;
	else
		v20 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v20);
	v21 = sub_14018B280(8i64, 0);
	if (v21)
		*(_QWORD*)v21 = off_140B66C70;
	else
		v21 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v21);
	v22 = sub_14018B280(8i64, 0);
	if (v22)
		*(_QWORD*)v22 = off_140B66C28;
	else
		v22 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v22);
	v23 = sub_14018B280(8i64, 0);
	if (v23)
		*(_QWORD*)v23 = off_140B66C40;
	else
		v23 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v23);
	v24 = sub_14018B280(8i64, 0);
	if (v24)
		*(_QWORD*)v24 = off_140B66CB8;
	else
		v24 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v24);
	v25 = sub_14018B280(8i64, 0);
	if (v25)
		*(_QWORD*)v25 = off_140B66CD0;
	else
		v25 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v25);
	v26 = sub_14018B280(8i64, 0);
	if (v26)
		*(_QWORD*)v26 = off_140B66C88;
	else
		v26 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v26);
	v27 = sub_14018B280(8i64, 0);
	if (v27)
		*(_QWORD*)v27 = off_140B66CA0;
	else
		v27 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v27);
	v28 = sub_14018B280(8i64, 0);
	if (v28)
		*(_QWORD*)v28 = off_140B66B98;
	else
		v28 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v28);
	v29 = sub_14018B280(8i64, 0);
	if (v29)
		*(_QWORD*)v29 = off_140B66BB0;
	else
		v29 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v29);
	v30 = sub_14018B280(8i64, 0);
	if (v30)
		*(_QWORD*)v30 = off_140B66B68;
	else
		v30 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v30);
	v31 = sub_14018B280(8i64, 0);
	if (v31)
		*(_QWORD*)v31 = off_140B66B80;
	else
		v31 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v31);
	v32 = sub_14018B280(8i64, 0);
	if (v32)
		*(_QWORD*)v32 = off_140B66BF8;
	else
		v32 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v32);
	v33 = sub_14018B280(8i64, 0);
	if (v33)
		*(_QWORD*)v33 = off_140B66C10;
	else
		v33 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v33);
	v34 = sub_14018B280(8i64, 0);
	if (v34)
		*(_QWORD*)v34 = off_140B66BC8;
	else
		v34 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v34);
	v35 = sub_14018B280(8i64, 0);
	if (v35)
		*(_QWORD*)v35 = off_140B66BE0;
	else
		v35 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v35);
	v36 = sub_14018B280(8i64, 0);
	if (v36)
		*(_QWORD*)v36 = off_140B66AD8;
	else
		v36 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v36);
	v37 = sub_14018B280(8i64, 0);
	if (v37)
		*(_QWORD*)v37 = off_140B66AF0;
	else
		v37 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v37);
	v38 = sub_14018B280(8i64, 0);
	if (v38)
		*(_QWORD*)v38 = off_140B66AA8;
	else
		v38 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v38);
	v39 = sub_14018B280(8i64, 0);
	if (v39)
		*(_QWORD*)v39 = off_140B66AC0;
	else
		v39 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v39);
	v40 = sub_14018B280(8i64, 0);
	if (v40)
		*(_QWORD*)v40 = off_140B66B38;
	else
		v40 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v40);
	v41 = sub_14018B280(8i64, 0);
	if (v41)
		*(_QWORD*)v41 = off_140B66B50;
	else
		v41 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v41);
	v42 = sub_14018B280(8i64, 0);
	if (v42)
		*(_QWORD*)v42 = off_140B66B08;
	else
		v42 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v42);
	v43 = sub_14018B280(8i64, 0);
	if (v43)
		*(_QWORD*)v43 = off_140B66B20;
	else
		v43 = 0i64;
	sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v43);
	v44 = sub_14018B280(64i64, 0);
	if (v44)
	{
		*((_QWORD*)v44 + 4) = 0i64;
		*((_QWORD*)v44 + 5) = 0i64;
		*v44 = 0;
		*((_QWORD*)v44 + 2) = sub_140429630;
		*((_QWORD*)v44 + 1) = a1;
		*((_QWORD*)v44 + 3) = 0i64;
		*((_QWORD*)v44 + 6) = 0i64;
		*((_QWORD*)v44 + 7) = 0i64;
		qword_140C658A8 = (__int64)v44;
	}
	else
	{
		qword_140C658A8 = 0i64;
	}
	v45 = sub_14018B280(64i64, 0);
	v46 = v45;
	if (v45)
	{
		*((_QWORD*)v45 + 4) = 0i64;
		*((_QWORD*)v45 + 5) = 0i64;
		*v45 = 0;
		*((_QWORD*)v45 + 2) = sub_140429630;
		*((_QWORD*)v45 + 1) = a1;
		*((_QWORD*)v45 + 3) = 0i64;
		*((_QWORD*)v45 + 6) = 0i64;
		*((_QWORD*)v45 + 7) = 0i64;
		qword_140C658B0 = (__int64)v45;
	}
	else
	{
		v46 = 0i64;
		qword_140C658B0 = 0i64;
	}
	v47 = qword_140C658A8;
	v48 = qword_140C65898;
	v49 = (__int64*)(qword_140C65898 + 27832);
	if (!*(_QWORD*)(qword_140C658A8 + 32))
	{
		*(_QWORD*)(qword_140C658A8 + 32) = v49;
		*(_QWORD*)(v47 + 40) = *v49;
		*v49 = v47;
		v50 = *(_QWORD*)(v47 + 40);
		if (v50)
			*(_QWORD*)(v50 + 32) = v47 + 40;
	}
	v51 = (int**)(v48 + 27840);
	if (!*((_QWORD*)v46 + 4))
	{
		*((_QWORD*)v46 + 4) = v51;
		*((_QWORD*)v46 + 5) = *v51;
		*v51 = v46;
		v52 = *((_QWORD*)v46 + 5);
		if (v52)
			*(_QWORD*)(v52 + 32) = v46 + 10;
	}
	sub_1400E7190(a1, (int*)L"TooltipStratum", 0);
	sub_1400E7190(a1, (int*)L"DefaultStratum", 0);
	sub_1400E7190(a1, (int*)L"FixedHudStratumHigh", 0);
	sub_1400E7190(a1, (int*)L"FixedHudStratum", 0);
	sub_1400E7190(a1, (int*)L"FixedHudStratumLow", 0);
	sub_1400E7190(a1, (int*)L"InWorldHudStratum", 1);
	return a1;
}
// 140AFFE48: using guessed type wchar_t aDefaultstratum_6[15];
// 140B00088: using guessed type wchar_t aInworldhudstra[18];
// 140B000B0: using guessed type wchar_t aFixedhudstratu_1[19];
// 140B000D8: using guessed type wchar_t aFixedhudstratu_0[16];
// 140B00198: using guessed type wchar_t aFixedhudstratu[20];
// 140B001C0: using guessed type wchar_t aTooltipstratum[15];
// 140B001E0: using guessed type wchar_t aGamemgr[8];
// 140B14630: using guessed type wchar_t aUiAssetsDocsGe_11[39];
// 140B14680: using guessed type wchar_t aUiAssetsDocsGe_10[41];
// 140B66AA8: using guessed type __int64 (__fastcall *off_140B66AA8[108])();
// 140B66AC0: using guessed type __int64 (__fastcall *off_140B66AC0[105])();
// 140B66AD8: using guessed type __int64 (__fastcall *off_140B66AD8[102])();
// 140B66AF0: using guessed type __int64 (__fastcall *off_140B66AF0[99])();
// 140B66B08: using guessed type __int64 (__fastcall *off_140B66B08[96])();
// 140B66B20: using guessed type __int64 (__fastcall *off_140B66B20[93])();
// 140B66B38: using guessed type __int64 (__fastcall *off_140B66B38[90])();
// 140B66B50: using guessed type __int64 (__fastcall *off_140B66B50[87])();
// 140B66B68: using guessed type __int64 (__fastcall *off_140B66B68[84])();
// 140B66B80: using guessed type __int64 (__fastcall *off_140B66B80[81])();
// 140B66B98: using guessed type __int64 (__fastcall *off_140B66B98[78])();
// 140B66BB0: using guessed type __int64 (__fastcall *off_140B66BB0[75])();
// 140B66BC8: using guessed type __int64 (__fastcall *off_140B66BC8[72])();
// 140B66BE0: using guessed type __int64 (__fastcall *off_140B66BE0[69])();
// 140B66BF8: using guessed type __int64 (__fastcall *off_140B66BF8[66])();
// 140B66C10: using guessed type __int64 (__fastcall *off_140B66C10[63])();
// 140B66C28: using guessed type __int64 (__fastcall *off_140B66C28[60])();
// 140B66C40: using guessed type __int64 (__fastcall *off_140B66C40[57])();
// 140B66C58: using guessed type __int64 (__fastcall *off_140B66C58[54])();
// 140B66C70: using guessed type __int64 (__fastcall *off_140B66C70[51])();
// 140B66C88: using guessed type __int64 (__fastcall *off_140B66C88[48])();
// 140B66CA0: using guessed type __int64 (__fastcall *off_140B66CA0[45])();
// 140B66CB8: using guessed type __int64 (__fastcall *off_140B66CB8[42])();
// 140B66CD0: using guessed type __int64 (__fastcall *off_140B66CD0[39])();
// 140B66CE8: using guessed type __int64 (__fastcall *off_140B66CE8[36])();
// 140B66D00: using guessed type __int64 (__fastcall *off_140B66D00[33])();
// 140B66D18: using guessed type __int64 (__fastcall *off_140B66D18[30])();
// 140B66D30: using guessed type __int64 (__fastcall *off_140B66D30[27])();
// 140B66D48: using guessed type __int64 (__fastcall *off_140B66D48[24])();
// 140B66D60: using guessed type __int64 (__fastcall *off_140B66D60[21])();
// 140B66D78: using guessed type __int64 (__fastcall *off_140B66D78[18])();
// 140B66D90: using guessed type __int64 (__fastcall *off_140B66D90[15])();
// 140B66DA8: using guessed type __int64 (__fastcall *off_140B66DA8[12])();
// 140B66DC0: using guessed type __int64 (__fastcall *off_140B66DC0[9])();
// 140B66DD8: using guessed type __int64 (__fastcall *off_140B66DD8[6])();
// 140B66DF0: using guessed type __int64 (__fastcall *off_140B66DF0[3])();
// 140B702F0: using guessed type __int64 (__fastcall *off_140B702F0[27])();
// 140C57760: using guessed type char *off_140C57760;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A8: using guessed type __int64 qword_140C658A8;
// 140C658B0: using guessed type __int64 qword_140C658B0;

