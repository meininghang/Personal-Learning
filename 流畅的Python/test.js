// 引入 fetch
const fetch = require('node-fetch');

// 目标网址
const url = 'https://stablewatch.io';

fetch(url)
  .then(response => {
    if (!response.ok) {
      throw new Error('网络响应失败: ' + response.status);
    }
    return response.text();
  })
  .then(html => {
    // 尝试用正则查找 MarketCap 及其后面的金额（仅为示例，具体需根据页面结构调整）
    const match = html.match(/Market\\s*Cap[^\\d]*([\\d,.]+[a-zA-Z]*)/i);
    const marketCap = match ? match[1] : '未找到 MarketCap 数据';
    console.log('MarketCap：', marketCap);
  })
  .catch(error => {
    console.error('抓取出错:', error);
  });
